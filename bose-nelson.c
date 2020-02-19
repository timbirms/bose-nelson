// bose-nelson.c
// generates plans for swap/sort-networks algorithmically.
// substitutes 'best' plans from academia where available.

// Call bose_nelson(n) to generate a network on the fly, it chooses
// the most efficient networks ((for inputs of *9..16*) spec'd as macros
// generated from plans given by http://pages.ripco.net/~jgamble/nw.html)

// "A Sorting Problem" -- R. C. Bose & R. J. Nelson, JACM.V9.p282++
//  https://dblp1.uni-trier.de/db/journals/jacm/jacm9.html
//  https://dl.acm.org/doi/10.1145/321119.321126 (fascinating)
// (see also: https://www.cs.brandeis.edu/~hugues/sorting_networks.html)<MT!

// Initial Implementation via https://github.com/atinm/bose-nelson
// <2014-01-14> Last commit Atin M., c139120
// <2020-02-15 Sa> max: rewritten for my understanding.

// used to make sort-function libraries!

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#include "bose-nelson.h"
#include "bose-specs.h"    // macros to make strings for the 'best' swap plans.


//#define mt_show_blocks


// the networks are output by this replacable function.
// (you would want to do this for code-generation)
// just *be* *aware* that the algo as implemented is 1-based!

void bose_swap(int64_t i, int64_t j) {
  //print out in 0 based notation
  printf("swap(%d, %d);\n",--i,--j);
}

swap_fn_t bose_swap_fn;


// <bose_nelson>

void bose_bracket(int i,int x,int j,int y) {
#ifdef mt_show_blocks
  printf("\n/*%d-%d, %d-%d*/\n",i-1,i-1+x-1,j-1+y-1,j-1);
#endif
  //value of first element in sequence 1
  //length of sequence 1
  //value of first element in sequence 2
  //length of sequence 2
  if(x == 1 && y == 1) {
    //1 comp sort 2 items
    bose_swap_fn(i, j);
  } else if(x == 1 && y == 2) {
    //2 comps insert an item into a sorted sequence (of length 2.)
    bose_swap_fn(i, (j+1));
    bose_swap_fn(i, j);
  }
  else if(x == 2 && y == 1) {
    //As above, but inserting j
    bose_swap_fn(i, j);
    bose_swap_fn((i+1), j);
  } else {
    //recurse bracket to shorten sequences, attempting to make
    //the lengths odd/even so we can eventually merge them
    int a= x/2;
    int b= (x&1) ?y :y+1;
        b= b/2;
    bose_bracket( i,       a,   j,       b);
    bose_bracket((i+a), (x-a), (j+b), (y-b));
    bose_bracket((i+a), (x-a),  j,       b);
  }
}

void bose_star(int i, int n) {
  //sort the sequence {X1,...,Xn}
  // recurse low-bound of first element and length of sequence
  // split into tiny bits, then merge them for, tada, a plan!
  if(n<=1) return;
  int a= n/2;
  bose_star(i,a);
  bose_star((i+a), (n-a));
#ifdef mt_show_blocks
  printf("\n/*--- %d-%d ---*/\n",i,n);
#endif
  bose_bracket(i, a, (i+a), (n-a)); //<MT!
}

// </bose_nelson>

// this is a list of the specification strings created
// by sort-plans.h ..

const char* bose_best_specs(int n) {
  switch (n) {
  case  9: return best09;// 25 (comps)
  case 10: return best10;// 29
  case 11: return best11;// 35
  case 12: return best12;// 39
  case 13: return best13;// 45
  case 14: return best14;// 51
  case 15: return best15;// 56
  case 16: return best16;// 60
  default: return NULL;
  }
}

// this code replaces bose_nelson and calls the output
// directly with values taken from the specification string.

void bose_best(const char* best) {
  const char* p= best;
  int cnt= (uint8_t)*p; p++;
  while (cnt>0) {
    int i= (uint8_t)*p; p++;
    int j= (uint8_t)*p; p++;
    bose_swap_fn(i+1,j+1);
    cnt--;
  }
}

// to wrap it up, this write a sort-network for 'n'
// via calls to a swap_fn that prints/acts on it.


void bose_nelson(int n, swap_fn_t doc_swap) {
  bose_swap_fn= (doc_swap==NULL)? bose_swap : doc_swap;
#ifdef mt_show_blocks
  // lets see the bose-nelson plan brackets even though we have a better spec.
  bose_star(1, n);
#else
  const char* best= bose_best_specs(n);
  if (best==NULL) bose_star(1, n);
  else bose_best(best);
#endif
}

//
