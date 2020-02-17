#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

//

int64_t muldiv(int64_t a, int64_t b, int64_t c, uint64_t n) {
  return (a < 0x7FFFFFFF && b < 0x7FFFFFFF)
    ? (a * b) / c
    : (n != 2)
      ? (c <= a)
        ? ((a / c) * b + muldiv(b, a % c, c, n + 1))
        : muldiv(a, b, c / 2,0) / 2
      : 0;
}

size_t scaled_random(size_t n){
  //min to max (inclusive), use:
  //int result = rand() % (max - min + 1) + min;
  return muldiv(n,rand(),RAND_MAX,0);
}

void shuffle(int64_t *array, size_t n) {
  //printf("shuffle(r,n);\n");
  //Fisher-Yates
  if (n<1) return;
  for (size_t i= n-1; i>0; i--) {
    size_t j = scaled_random(n);
    int t = array[j];
    array[j] = array[i];
    array[i] = t;
  }
}

//


#include <time.h>
#include <sys/time.h>

void ns_sleep(long sec, long nsec) {
   struct timespec t;
   t.tv_sec = sec;
   t.tv_nsec = nsec;
   nanosleep(&t, NULL);
}

int64_t std_time_ms(void) {
  struct timeval tval;
  gettimeofday(&tval, NULL);
  int64_t ms = (tval.tv_sec * 1000000) + tval.tv_usec;
  return ms / 1000;
}

//

// get run-times
// time_ start/finish return the current time
// and update these vars:

int64_t started=0; // time
int64_t runtime=0; // duration
int64_t lastrun=0; // prior duration

int64_t time_start(void) {
  started= std_time_ms();
  return started;
}

int64_t time_finish(char* str) {
  int64_t result= std_time_ms();
  lastrun= runtime;
  runtime= result-started;
  printf("t: %4ims %s\n",runtime,str);
  return result;
}

/* start(); */
  /* ns_sleep(0,1000000); */
  /* finish("sleep 0,1000000\n"); */
