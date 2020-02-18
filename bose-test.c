#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "bose-swap.h"
#include "bose-plans.h"
#include "bose-nelson.h"    // macros to make strings for the 'best' swap plans.
#include "util.h"

// lets test the swap-network and compare performance to qsort.
// this code uses pointer sized arrays with integer data to do that.

int64_t o[40]; // randcnt,shuffle,sorted,reverse input
int64_t r[40]; // q/swap-sort work array

// <=TWENTY-FIVE
// 25 is the point at which qsort wins over swap (-o3) on my system.
//     (swap sorts 32 bit arrays very much faster to 30+)

int n=20;


// quick compile and run with:

// gcc util.c bose-nelson.c bose-plans.c bose-test.c -o bt && bt 0
// gcc -o3 util.c bose-nelson.c bose-plans.c bose-test.c -o bt && bt 0


//


// comparing and swapping

// this code is all about sorting by comparing and swapping.
// all the tests below use this method to compare:

int intcmp(int64_t* l,int64_t* r){
  if (*l<*r) return -1;
  if (*l>*r) return 1;
  return 0;
}

// in the 'theoretical' swap test, the algo feeds 1-based
// array indexes to the swap function shown here:

void r_swap(int64_t i, int64_t j) {
  if (r[--i]<r[--j]) return;  //printf("r_swap(%d, %d);\n",i,j);
  int t=r[i];  r[i]=r[j];  r[j]=t;
}

// once the code has been generated, the indicies will be 0-based
// and the code used to do the actual swaps changes to:

void cmp_swap(int64_t i, int64_t j) {
  if (r[i]<r[j]) return;
  int t=r[i]; r[i]=r[j]; r[j]=t;
}


// testing all the things

// we use memcpy to copy a template array with unsorted values
// into the array actually sorted in the test. this gives us a baseline:

void test0(void) {
  memcpy(r,o,sizeof(o));
}

// adding to the baseline, test1 adds a call to c's own qsort:
void test1(void) {
  memcpy(r,o,sizeof(o));
  qsort(r, n, sizeof(int), (__compar_fn_t)intcmp);
}

// now to start the testing, test2, using r_swap,
// generates the network and uses it to swap. so that's slow.
void test2(void) {
  memcpy(r,o,sizeof(o));
  bose_nelson(n,r_swap);
}

// after the magic-code generation has turned the plan into
// functions, bose-plans's constructor has set these values:


// with the pre-compiled plans in place, test3, using sort_best_fns[]
// blazes through the task using the best plan.

void test3(void) {
  memcpy(r,o,sizeof(o));
  bose_sort(n,cmp_swap);
}

// ok .. above you learned about what the rest of this code uses to test
// the different approaches to sorting. lets see how that happens below:


// initialize 4 different kinds of things to be sorted:

void test_init(int how) {
  // 1-- count of n^2 randoms
  // 2-- shuffled list of n numbers
  // 3-- sorted list of n
  // 4-- reversed list of n

  srand(2); //1 would not move all the items. 2 worked.

  switch (how) {
  case 1: {
    printf("init: count-randoms(%i)\n",n);
    for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
        r[scaled_random(n)]++;
      }
    }
    break;
  }

  case 2: {
    printf("init: shuffled(%i)\n",n);
    for (int i=0; i<n; i++) r[i]=1+i;
    shuffle(r,n);
    if (0) {//test-shuffle & sort-back
      memcpy(o,r,sizeof(r));
      for (int i=0; i<n; i++) { printf("sh s%3i %3i\n",i,r[i]); }
      test1();
      for (int i=0; i<n; i++) { printf("so s%3i %3i\n",i,r[i]); }
      exit(0);
    }
    break;
  }

  case 3: {
    printf("init: sorted(%i)\n",n);
    for (int i=0; i<n; i++) r[i]=i+1;
    break;
  }

  case 4: {
    printf("init: reversed(%i)\n",n);
    for (int i=0; i<n; i++) r[i]=n-i;
    break;
  }

  }
  // save the array so we can re-use it as test input
  memcpy(o,r,sizeof(r));

  // test print it to take a look:
  //for (int i=0; i<n; i++) { printf("t1 s%3i %3i\n",i,r[i]); }
}


// the actual testing/timing is all done here:

void tests(void){
  int m= 1000000;

  for (int i=1; i<5; i++) {
    test_init(i);
    time_start(); for (int x=0;x<m;x++) test0(); time_finish("memcpy");
    int64_t t0=runtime;

    if (1) { //compare to qsort.
      time_start(); for (int x=0;x<m;x++) test1(); time_finish("qsort");

    } else { //compare to 'theoretical' where the plan is made and run directly.
      time_start(); for (int x=0;x<m;x++) test2(); time_finish("sort-net");
    }

    time_start(); for (int x=0;x<m;x++) test3(); time_finish("sort-net/cc");
    int64_t dt=lastrun-runtime;
    printf("t: %4ims deltaT\n",dt);
    int64_t pc=(runtime-t0)*100 / (lastrun-t0);
    printf("t: %4i%% net/qsort (%i%%)\n",pc,(pc-100));
    printf("\n");
  }
}

/////////////////////////////////////////


int main(int argc, char *argv[]) {
  if (argc<2) {
    printf("Usage:\n");
    printf("> bose-nelson n -- print bose_nelson plan for n\n");
    printf("> bose-nelson 0 -- run tests \n");
  } else {
    int n = atoi(argv[1]);
    if (n)
      bose_nelson(n,NULL);
    else
      tests();
  }
  return 0;
}

//
