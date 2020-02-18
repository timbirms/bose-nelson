#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "bose-swap.h"
#include "bose-nelson.h"    // macros to make strings for the 'best' swap plans.
#include "util.h"


// <=TWENTY-FIVE
// 25 is the point at which the networks achieve parity
// with qsort on my system, using no compiler optimizations.
// -o3 gives the networks a 10..30% advantage at that size.

#define suggest 25
#define limit   40
#define alloc   100*1024
#define outfn   "bose-plans.c"
#define outhdr  "bose-plans.h"

// generate the sort-networks as stand-alone functions
// accessible through the sort_plan_fns[] instanced above.

// not pretty; rewrite at your leisure. i went for getting it done.

char* out;
char* idx;
int brk=0;

#define add(str) strcpy(idx,str); idx += strlen(idx)
#define addf(fmt,val) sprintf(idx,fmt,val); idx += strlen(idx)

void bose_write_swap(int64_t i, int64_t j) {
  switch (brk) {
  case 0:  sprintf(idx,"  swap(%d, %d);",--i,--j); break;
  case 4:  sprintf(idx," swap(%d, %d);\n",--i,--j); break;
  default:  sprintf(idx," swap(%d, %d);",--i,--j);
  }
  brk= ++brk % 5;
  idx += strlen(idx);
}

void bose_write_plan(int n) {
  brk=0;
  sprintf(idx,"void sort_plan_%i(swap_fn_t swap) {\n",n);
  idx += strlen(idx);
  bose_nelson(n,bose_write_swap);
  if (brk!=0) add("\n");
  add("}\n");
}

void bose_write_plan_index(int upto) {
  add("\n");
  add("typedef void (*sort_plan_fn)(swap_fn_t cmp_swap);\n");
  add("\n");
  add("int n_sort_fns;\n");
  add("sort_plan_fn* sort_fns;\n");
  add("\n");
  add("int bose_sort(int n, swap_fn_t cmp_swap) {\n");
  add("  if (n<2 || n>n_sort_fns) return -1;\n");
  add("  sort_fns[n](cmp_swap);\n");
  add("  return 0;\n");
  add("};\n");
  add("\n");
  add("void ConstructSortPlans (void) __attribute__ ((constructor));\n");
  add("void ConstructSortPlans (void) {\n");
  addf("  n_sort_fns= %i;\n",upto);
  addf("  sort_fns= malloc(%i * sizeof(sort_plan_fn));\n",upto+1);

  for (int i=2; i<=upto; i++) {
    sprintf(idx,"  sort_fns[%i]= sort_plan_%i;\n",i,i);
    idx += strlen(idx);
  }
  add("}");
}

void bose_write_plans(int upto) {
  out=malloc(alloc);
  idx=out;
  add("// -*- mode: text -*-\n");//(emacs) for huge versions of this
  addf("//auto-generated sort-networks/plans for n= 2..%i\n\n",upto);
  add("#include <stdlib.h>\n");
  addf("#include \"%s\"\n\n",outhdr);

  for (int i=2; i<=upto; i++){
    bose_write_plan(i);
  }
  bose_write_plan_index(upto);

  printf("%s\n",out);
  add("\n");
  FILE *fp = fopen(outfn, "w");
  fputs(out, fp);
  fclose(fp);
  free(out);
  printf("Wrote %s\n",outfn);
}

/////////////////////////////////////////


int main(int argc, char *argv[]) {
  if (argc<2) {
    printf("Usage:\n");
    printf("> bose-write-plans <for 0..number of items>\n");
  } else {
    int n = atoi(argv[1]);
    if (n>limit) {
      printf("(code allocates space for only up to ~%i plans."
             " fix it or adjust the input! recommend=%i)\n",limit,suggest);
    } else bose_write_plans(n);
  }
  return 0;
}

// gcc -g util.c bose-specs.h bose-nelson.c bose-write.c -o bw
