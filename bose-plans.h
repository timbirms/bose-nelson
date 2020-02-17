#ifndef BOSE_PLANS
#define BOSE_PLANS

#include "bose-swap.h"

typedef void (*sort_best)(swap_fn_t swap);

extern sort_best* sort_best_fns;
extern int        sort_best_fns_n;

#endif
