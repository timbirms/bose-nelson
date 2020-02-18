#ifndef BOSE_NELSON
#define BOSE_NELSON

#include "bose-swap.h"

// this module drives the code-generator.
// doc_swap == NULL .. prints swap-plan to stdout.

void bose_nelson(int n, swap_fn_t doc_swap);

#endif
