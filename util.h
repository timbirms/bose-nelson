#ifndef BOSE_UTIL
#define BOSE_UTIL

int64_t muldiv(int64_t a, int64_t b, int64_t c, uint64_t n);
size_t scaled_random(size_t n);
void shuffle(int64_t *array, size_t n);

//

void ns_sleep(long sec, long nsec);
int64_t std_time_ms(void);

//

int64_t time_start(void);
int64_t time_finish(char* str);

// no records, no pointers,
// just 3 simple non-concurrent globals

extern int64_t started; // time
extern int64_t runtime; // duration
extern int64_t lastrun; // prior duration

//
#endif
