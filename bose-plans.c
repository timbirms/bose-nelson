// -*- mode: text -*-
//auto-generated sort-networks/plans for n= 2..30

#include <stdlib.h>
#include "bose-plans.h"

void sort_plan_2(swap_fn_t swap) {
  swap(0, 1);
}
void sort_plan_3(swap_fn_t swap) {
  swap(1, 2); swap(0, 2); swap(0, 1);
}
void sort_plan_4(swap_fn_t swap) {
  swap(0, 1); swap(2, 3); swap(0, 2); swap(1, 3); swap(1, 2);
}
void sort_plan_5(swap_fn_t swap) {
  swap(0, 1); swap(3, 4); swap(2, 4); swap(2, 3); swap(0, 3);
  swap(0, 2); swap(1, 4); swap(1, 3); swap(1, 2);
}
void sort_plan_6(swap_fn_t swap) {
  swap(1, 2); swap(0, 2); swap(0, 1); swap(4, 5); swap(3, 5);
  swap(3, 4); swap(0, 3); swap(1, 4); swap(2, 5); swap(2, 4);
  swap(1, 3); swap(2, 3);
}
void sort_plan_7(swap_fn_t swap) {
  swap(1, 2); swap(0, 2); swap(0, 1); swap(3, 4); swap(5, 6);
  swap(3, 5); swap(4, 6); swap(4, 5); swap(0, 4); swap(0, 3);
  swap(1, 5); swap(2, 6); swap(2, 5); swap(1, 3); swap(2, 4);
  swap(2, 3);
}
void sort_plan_8(swap_fn_t swap) {
  swap(0, 1); swap(2, 3); swap(0, 2); swap(1, 3); swap(1, 2);
  swap(4, 5); swap(6, 7); swap(4, 6); swap(5, 7); swap(5, 6);
  swap(0, 4); swap(1, 5); swap(1, 4); swap(2, 6); swap(3, 7);
  swap(3, 6); swap(2, 4); swap(3, 5); swap(3, 4);
}
void sort_plan_9(swap_fn_t swap) {
  swap(0, 1); swap(3, 4); swap(6, 7); swap(1, 2); swap(4, 5);
  swap(7, 8); swap(0, 1); swap(3, 4); swap(6, 7); swap(0, 3);
  swap(3, 6); swap(0, 3); swap(1, 4); swap(4, 7); swap(1, 4);
  swap(2, 5); swap(5, 8); swap(2, 5); swap(1, 3); swap(5, 7);
  swap(2, 6); swap(4, 6); swap(2, 4); swap(2, 3); swap(5, 6);
}
void sort_plan_10(swap_fn_t swap) {
  swap(4, 9); swap(3, 8); swap(2, 7); swap(1, 6); swap(0, 5);
  swap(1, 4); swap(6, 9); swap(0, 3); swap(5, 8); swap(0, 2);
  swap(3, 6); swap(7, 9); swap(0, 1); swap(2, 4); swap(5, 7);
  swap(8, 9); swap(1, 2); swap(4, 6); swap(7, 8); swap(3, 5);
  swap(2, 5); swap(6, 8); swap(1, 3); swap(4, 7); swap(2, 3);
  swap(6, 7); swap(3, 4); swap(5, 6); swap(4, 5);
}
void sort_plan_11(swap_fn_t swap) {
  swap(0, 1); swap(2, 3); swap(4, 5); swap(6, 7); swap(8, 9);
  swap(1, 3); swap(5, 7); swap(0, 2); swap(4, 6); swap(8, 10);
  swap(1, 2); swap(5, 6); swap(9, 10); swap(1, 5); swap(6, 10);
  swap(5, 9); swap(2, 6); swap(1, 5); swap(6, 10); swap(0, 4);
  swap(3, 7); swap(4, 8); swap(0, 4); swap(1, 4); swap(7, 10);
  swap(3, 8); swap(2, 3); swap(8, 9); swap(2, 4); swap(7, 9);
  swap(3, 5); swap(6, 8); swap(3, 4); swap(5, 6); swap(7, 8);
}
void sort_plan_12(swap_fn_t swap) {
  swap(0, 1); swap(2, 3); swap(4, 5); swap(6, 7); swap(8, 9);
  swap(10, 11); swap(1, 3); swap(5, 7); swap(9, 11); swap(0, 2);
  swap(4, 6); swap(8, 10); swap(1, 2); swap(5, 6); swap(9, 10);
  swap(1, 5); swap(6, 10); swap(5, 9); swap(2, 6); swap(1, 5);
  swap(6, 10); swap(0, 4); swap(7, 11); swap(3, 7); swap(4, 8);
  swap(0, 4); swap(7, 11); swap(1, 4); swap(7, 10); swap(3, 8);
  swap(2, 3); swap(8, 9); swap(2, 4); swap(7, 9); swap(3, 5);
  swap(6, 8); swap(3, 4); swap(5, 6); swap(7, 8);
}
void sort_plan_13(swap_fn_t swap) {
  swap(1, 7); swap(9, 11); swap(3, 4); swap(5, 8); swap(0, 12);
  swap(2, 6); swap(0, 1); swap(2, 3); swap(4, 6); swap(8, 11);
  swap(7, 12); swap(5, 9); swap(0, 2); swap(3, 7); swap(10, 11);
  swap(1, 4); swap(6, 12); swap(7, 8); swap(11, 12); swap(4, 9);
  swap(6, 10); swap(3, 4); swap(5, 6); swap(8, 9); swap(10, 11);
  swap(1, 7); swap(2, 6); swap(9, 11); swap(1, 3); swap(4, 7);
  swap(8, 10); swap(0, 5); swap(2, 5); swap(6, 8); swap(9, 10);
  swap(1, 2); swap(3, 5); swap(7, 8); swap(4, 6); swap(2, 3);
  swap(4, 5); swap(6, 7); swap(8, 9); swap(3, 4); swap(5, 6);
}
void sort_plan_14(swap_fn_t swap) {
  swap(0, 1); swap(2, 3); swap(4, 5); swap(6, 7); swap(8, 9);
  swap(10, 11); swap(12, 13); swap(0, 2); swap(4, 6); swap(8, 10);
  swap(1, 3); swap(5, 7); swap(9, 11); swap(0, 4); swap(8, 12);
  swap(1, 5); swap(9, 13); swap(2, 6); swap(3, 7); swap(0, 8);
  swap(1, 9); swap(2, 10); swap(3, 11); swap(4, 12); swap(5, 13);
  swap(5, 10); swap(6, 9); swap(3, 12); swap(7, 11); swap(1, 2);
  swap(4, 8); swap(1, 4); swap(7, 13); swap(2, 8); swap(2, 4);
  swap(5, 6); swap(9, 10); swap(11, 13); swap(3, 8); swap(7, 12);
  swap(6, 8); swap(10, 12); swap(3, 5); swap(7, 9); swap(3, 4);
  swap(5, 6); swap(7, 8); swap(9, 10); swap(11, 12); swap(6, 7);
  swap(8, 9);
}
void sort_plan_15(swap_fn_t swap) {
  swap(0, 1); swap(2, 3); swap(4, 5); swap(6, 7); swap(8, 9);
  swap(10, 11); swap(12, 13); swap(0, 2); swap(4, 6); swap(8, 10);
  swap(12, 14); swap(1, 3); swap(5, 7); swap(9, 11); swap(0, 4);
  swap(8, 12); swap(1, 5); swap(9, 13); swap(2, 6); swap(10, 14);
  swap(3, 7); swap(0, 8); swap(1, 9); swap(2, 10); swap(3, 11);
  swap(4, 12); swap(5, 13); swap(6, 14); swap(5, 10); swap(6, 9);
  swap(3, 12); swap(13, 14); swap(7, 11); swap(1, 2); swap(4, 8);
  swap(1, 4); swap(7, 13); swap(2, 8); swap(11, 14); swap(2, 4);
  swap(5, 6); swap(9, 10); swap(11, 13); swap(3, 8); swap(7, 12);
  swap(6, 8); swap(10, 12); swap(3, 5); swap(7, 9); swap(3, 4);
  swap(5, 6); swap(7, 8); swap(9, 10); swap(11, 12); swap(6, 7);
  swap(8, 9);
}
void sort_plan_16(swap_fn_t swap) {
  swap(0, 1); swap(2, 3); swap(4, 5); swap(6, 7); swap(8, 9);
  swap(10, 11); swap(12, 13); swap(14, 15); swap(0, 2); swap(4, 6);
  swap(8, 10); swap(12, 14); swap(1, 3); swap(5, 7); swap(9, 11);
  swap(13, 15); swap(0, 4); swap(8, 12); swap(1, 5); swap(9, 13);
  swap(2, 6); swap(10, 14); swap(3, 7); swap(11, 15); swap(0, 8);
  swap(1, 9); swap(2, 10); swap(3, 11); swap(4, 12); swap(5, 13);
  swap(6, 14); swap(7, 15); swap(5, 10); swap(6, 9); swap(3, 12);
  swap(13, 14); swap(7, 11); swap(1, 2); swap(4, 8); swap(1, 4);
  swap(7, 13); swap(2, 8); swap(11, 14); swap(2, 4); swap(5, 6);
  swap(9, 10); swap(11, 13); swap(3, 8); swap(7, 12); swap(6, 8);
  swap(10, 12); swap(3, 5); swap(7, 9); swap(3, 4); swap(5, 6);
  swap(7, 8); swap(9, 10); swap(11, 12); swap(6, 7); swap(8, 9);
}
void sort_plan_17(swap_fn_t swap) {
  swap(0, 1); swap(2, 3); swap(0, 2); swap(1, 3); swap(1, 2);
  swap(4, 5); swap(6, 7); swap(4, 6); swap(5, 7); swap(5, 6);
  swap(0, 4); swap(1, 5); swap(1, 4); swap(2, 6); swap(3, 7);
  swap(3, 6); swap(2, 4); swap(3, 5); swap(3, 4); swap(8, 9);
  swap(10, 11); swap(8, 10); swap(9, 11); swap(9, 10); swap(12, 13);
  swap(15, 16); swap(14, 16); swap(14, 15); swap(12, 15); swap(12, 14);
  swap(13, 16); swap(13, 15); swap(13, 14); swap(8, 13); swap(8, 12);
  swap(9, 14); swap(9, 13); swap(9, 12); swap(10, 15); swap(11, 16);
  swap(11, 15); swap(10, 13); swap(10, 12); swap(11, 14); swap(11, 13);
  swap(11, 12); swap(0, 9); swap(0, 8); swap(1, 10); swap(1, 9);
  swap(1, 8); swap(2, 11); swap(3, 12); swap(3, 11); swap(2, 9);
  swap(2, 8); swap(3, 10); swap(3, 9); swap(3, 8); swap(4, 13);
  swap(5, 14); swap(5, 13); swap(6, 15); swap(7, 16); swap(7, 15);
  swap(6, 13); swap(7, 14); swap(7, 13); swap(4, 9); swap(4, 8);
  swap(5, 10); swap(5, 9); swap(5, 8); swap(6, 11); swap(7, 12);
  swap(7, 11); swap(6, 9); swap(6, 8); swap(7, 10); swap(7, 9);
  swap(7, 8);
}
void sort_plan_18(swap_fn_t swap) {
  swap(0, 1); swap(2, 3); swap(0, 2); swap(1, 3); swap(1, 2);
  swap(4, 5); swap(7, 8); swap(6, 8); swap(6, 7); swap(4, 7);
  swap(4, 6); swap(5, 8); swap(5, 7); swap(5, 6); swap(0, 5);
  swap(0, 4); swap(1, 6); swap(1, 5); swap(1, 4); swap(2, 7);
  swap(3, 8); swap(3, 7); swap(2, 5); swap(2, 4); swap(3, 6);
  swap(3, 5); swap(3, 4); swap(9, 10); swap(11, 12); swap(9, 11);
  swap(10, 12); swap(10, 11); swap(13, 14); swap(16, 17); swap(15, 17);
  swap(15, 16); swap(13, 16); swap(13, 15); swap(14, 17); swap(14, 16);
  swap(14, 15); swap(9, 14); swap(9, 13); swap(10, 15); swap(10, 14);
  swap(10, 13); swap(11, 16); swap(12, 17); swap(12, 16); swap(11, 14);
  swap(11, 13); swap(12, 15); swap(12, 14); swap(12, 13); swap(0, 9);
  swap(1, 10); swap(1, 9); swap(2, 11); swap(3, 12); swap(3, 11);
  swap(2, 9); swap(3, 10); swap(3, 9); swap(4, 13); swap(5, 14);
  swap(5, 13); swap(6, 15); swap(7, 16); swap(8, 17); swap(8, 16);
  swap(7, 15); swap(8, 15); swap(6, 13); swap(7, 14); swap(8, 14);
  swap(7, 13); swap(8, 13); swap(4, 9); swap(5, 10); swap(5, 9);
  swap(6, 11); swap(7, 12); swap(8, 12); swap(7, 11); swap(8, 11);
  swap(6, 9); swap(7, 10); swap(8, 10); swap(7, 9); swap(8, 9);
}
void sort_plan_19(swap_fn_t swap) {
  swap(0, 1); swap(2, 3); swap(0, 2); swap(1, 3); swap(1, 2);
  swap(4, 5); swap(7, 8); swap(6, 8); swap(6, 7); swap(4, 7);
  swap(4, 6); swap(5, 8); swap(5, 7); swap(5, 6); swap(0, 5);
  swap(0, 4); swap(1, 6); swap(1, 5); swap(1, 4); swap(2, 7);
  swap(3, 8); swap(3, 7); swap(2, 5); swap(2, 4); swap(3, 6);
  swap(3, 5); swap(3, 4); swap(9, 10); swap(12, 13); swap(11, 13);
  swap(11, 12); swap(9, 12); swap(9, 11); swap(10, 13); swap(10, 12);
  swap(10, 11); swap(14, 15); swap(17, 18); swap(16, 18); swap(16, 17);
  swap(14, 17); swap(14, 16); swap(15, 18); swap(15, 17); swap(15, 16);
  swap(9, 14); swap(10, 15); swap(10, 14); swap(11, 16); swap(12, 17);
  swap(13, 18); swap(13, 17); swap(12, 16); swap(13, 16); swap(11, 14);
  swap(12, 15); swap(13, 15); swap(12, 14); swap(13, 14); swap(0, 10);
  swap(0, 9); swap(1, 11); swap(1, 10); swap(1, 9); swap(2, 12);
  swap(3, 13); swap(3, 12); swap(2, 10); swap(2, 9); swap(3, 11);
  swap(3, 10); swap(3, 9); swap(4, 14); swap(5, 15); swap(5, 14);
  swap(6, 16); swap(7, 17); swap(8, 18); swap(8, 17); swap(7, 16);
  swap(8, 16); swap(6, 14); swap(7, 15); swap(8, 15); swap(7, 14);
  swap(8, 14); swap(4, 9); swap(5, 10); swap(5, 9); swap(6, 11);
  swap(7, 12); swap(8, 13); swap(8, 12); swap(7, 11); swap(8, 11);
  swap(6, 9); swap(7, 10); swap(8, 10); swap(7, 9); swap(8, 9);
}
void sort_plan_20(swap_fn_t swap) {
  swap(0, 1); swap(3, 4); swap(2, 4); swap(2, 3); swap(0, 3);
  swap(0, 2); swap(1, 4); swap(1, 3); swap(1, 2); swap(5, 6);
  swap(8, 9); swap(7, 9); swap(7, 8); swap(5, 8); swap(5, 7);
  swap(6, 9); swap(6, 8); swap(6, 7); swap(0, 5); swap(1, 6);
  swap(1, 5); swap(2, 7); swap(3, 8); swap(4, 9); swap(4, 8);
  swap(3, 7); swap(4, 7); swap(2, 5); swap(3, 6); swap(4, 6);
  swap(3, 5); swap(4, 5); swap(10, 11); swap(13, 14); swap(12, 14);
  swap(12, 13); swap(10, 13); swap(10, 12); swap(11, 14); swap(11, 13);
  swap(11, 12); swap(15, 16); swap(18, 19); swap(17, 19); swap(17, 18);
  swap(15, 18); swap(15, 17); swap(16, 19); swap(16, 18); swap(16, 17);
  swap(10, 15); swap(11, 16); swap(11, 15); swap(12, 17); swap(13, 18);
  swap(14, 19); swap(14, 18); swap(13, 17); swap(14, 17); swap(12, 15);
  swap(13, 16); swap(14, 16); swap(13, 15); swap(14, 15); swap(0, 10);
  swap(1, 11); swap(1, 10); swap(2, 12); swap(3, 13); swap(4, 14);
  swap(4, 13); swap(3, 12); swap(4, 12); swap(2, 10); swap(3, 11);
  swap(4, 11); swap(3, 10); swap(4, 10); swap(5, 15); swap(6, 16);
  swap(6, 15); swap(7, 17); swap(8, 18); swap(9, 19); swap(9, 18);
  swap(8, 17); swap(9, 17); swap(7, 15); swap(8, 16); swap(9, 16);
  swap(8, 15); swap(9, 15); swap(5, 10); swap(6, 11); swap(6, 10);
  swap(7, 12); swap(8, 13); swap(9, 14); swap(9, 13); swap(8, 12);
  swap(9, 12); swap(7, 10); swap(8, 11); swap(9, 11); swap(8, 10);
  swap(9, 10);
}
void sort_plan_21(swap_fn_t swap) {
  swap(0, 1); swap(3, 4); swap(2, 4); swap(2, 3); swap(0, 3);
  swap(0, 2); swap(1, 4); swap(1, 3); swap(1, 2); swap(5, 6);
  swap(8, 9); swap(7, 9); swap(7, 8); swap(5, 8); swap(5, 7);
  swap(6, 9); swap(6, 8); swap(6, 7); swap(0, 5); swap(1, 6);
  swap(1, 5); swap(2, 7); swap(3, 8); swap(4, 9); swap(4, 8);
  swap(3, 7); swap(4, 7); swap(2, 5); swap(3, 6); swap(4, 6);
  swap(3, 5); swap(4, 5); swap(10, 11); swap(13, 14); swap(12, 14);
  swap(12, 13); swap(10, 13); swap(10, 12); swap(11, 14); swap(11, 13);
  swap(11, 12); swap(16, 17); swap(15, 17); swap(15, 16); swap(19, 20);
  swap(18, 20); swap(18, 19); swap(15, 18); swap(16, 19); swap(17, 20);
  swap(17, 19); swap(16, 18); swap(17, 18); swap(10, 16); swap(10, 15);
  swap(11, 17); swap(11, 16); swap(11, 15); swap(12, 18); swap(13, 19);
  swap(14, 20); swap(14, 19); swap(13, 18); swap(14, 18); swap(12, 15);
  swap(13, 16); swap(14, 17); swap(14, 16); swap(13, 15); swap(14, 15);
  swap(0, 11); swap(0, 10); swap(1, 12); swap(1, 11); swap(1, 10);
  swap(2, 13); swap(3, 14); swap(4, 15); swap(4, 14); swap(3, 13);
  swap(4, 13); swap(2, 10); swap(3, 11); swap(4, 12); swap(4, 11);
  swap(3, 10); swap(4, 10); swap(5, 16); swap(6, 17); swap(6, 16);
  swap(7, 18); swap(8, 19); swap(9, 20); swap(9, 19); swap(8, 18);
  swap(9, 18); swap(7, 16); swap(8, 17); swap(9, 17); swap(8, 16);
  swap(9, 16); swap(5, 11); swap(5, 10); swap(6, 12); swap(6, 11);
  swap(6, 10); swap(7, 13); swap(8, 14); swap(9, 15); swap(9, 14);
  swap(8, 13); swap(9, 13); swap(7, 10); swap(8, 11); swap(9, 12);
  swap(9, 11); swap(8, 10); swap(9, 10);
}
void sort_plan_22(swap_fn_t swap) {
  swap(0, 1); swap(3, 4); swap(2, 4); swap(2, 3); swap(0, 3);
  swap(0, 2); swap(1, 4); swap(1, 3); swap(1, 2); swap(6, 7);
  swap(5, 7); swap(5, 6); swap(9, 10); swap(8, 10); swap(8, 9);
  swap(5, 8); swap(6, 9); swap(7, 10); swap(7, 9); swap(6, 8);
  swap(7, 8); swap(0, 6); swap(0, 5); swap(1, 7); swap(1, 6);
  swap(1, 5); swap(2, 8); swap(3, 9); swap(4, 10); swap(4, 9);
  swap(3, 8); swap(4, 8); swap(2, 5); swap(3, 6); swap(4, 7);
  swap(4, 6); swap(3, 5); swap(4, 5); swap(11, 12); swap(14, 15);
  swap(13, 15); swap(13, 14); swap(11, 14); swap(11, 13); swap(12, 15);
  swap(12, 14); swap(12, 13); swap(17, 18); swap(16, 18); swap(16, 17);
  swap(20, 21); swap(19, 21); swap(19, 20); swap(16, 19); swap(17, 20);
  swap(18, 21); swap(18, 20); swap(17, 19); swap(18, 19); swap(11, 17);
  swap(11, 16); swap(12, 18); swap(12, 17); swap(12, 16); swap(13, 19);
  swap(14, 20); swap(15, 21); swap(15, 20); swap(14, 19); swap(15, 19);
  swap(13, 16); swap(14, 17); swap(15, 18); swap(15, 17); swap(14, 16);
  swap(15, 16); swap(0, 11); swap(1, 12); swap(1, 11); swap(2, 13);
  swap(3, 14); swap(4, 15); swap(4, 14); swap(3, 13); swap(4, 13);
  swap(2, 11); swap(3, 12); swap(4, 12); swap(3, 11); swap(4, 11);
  swap(5, 16); swap(6, 17); swap(7, 18); swap(7, 17); swap(6, 16);
  swap(7, 16); swap(8, 19); swap(9, 20); swap(10, 21); swap(10, 20);
  swap(9, 19); swap(10, 19); swap(8, 16); swap(9, 17); swap(10, 18);
  swap(10, 17); swap(9, 16); swap(10, 16); swap(5, 11); swap(6, 12);
  swap(7, 13); swap(7, 12); swap(6, 11); swap(7, 11); swap(8, 14);
  swap(9, 15); swap(10, 15); swap(9, 14); swap(10, 14); swap(8, 11);
  swap(9, 12); swap(10, 13); swap(10, 12); swap(9, 11); swap(10, 11);
}
void sort_plan_23(swap_fn_t swap) {
  swap(0, 1); swap(3, 4); swap(2, 4); swap(2, 3); swap(0, 3);
  swap(0, 2); swap(1, 4); swap(1, 3); swap(1, 2); swap(6, 7);
  swap(5, 7); swap(5, 6); swap(9, 10); swap(8, 10); swap(8, 9);
  swap(5, 8); swap(6, 9); swap(7, 10); swap(7, 9); swap(6, 8);
  swap(7, 8); swap(0, 6); swap(0, 5); swap(1, 7); swap(1, 6);
  swap(1, 5); swap(2, 8); swap(3, 9); swap(4, 10); swap(4, 9);
  swap(3, 8); swap(4, 8); swap(2, 5); swap(3, 6); swap(4, 7);
  swap(4, 6); swap(3, 5); swap(4, 5); swap(12, 13); swap(11, 13);
  swap(11, 12); swap(15, 16); swap(14, 16); swap(14, 15); swap(11, 14);
  swap(12, 15); swap(13, 16); swap(13, 15); swap(12, 14); swap(13, 14);
  swap(18, 19); swap(17, 19); swap(17, 18); swap(21, 22); swap(20, 22);
  swap(20, 21); swap(17, 20); swap(18, 21); swap(19, 22); swap(19, 21);
  swap(18, 20); swap(19, 20); swap(11, 17); swap(12, 18); swap(13, 19);
  swap(13, 18); swap(12, 17); swap(13, 17); swap(14, 20); swap(15, 21);
  swap(16, 22); swap(16, 21); swap(15, 20); swap(16, 20); swap(14, 17);
  swap(15, 18); swap(16, 19); swap(16, 18); swap(15, 17); swap(16, 17);
  swap(0, 12); swap(0, 11); swap(1, 13); swap(1, 12); swap(1, 11);
  swap(2, 14); swap(3, 15); swap(4, 16); swap(4, 15); swap(3, 14);
  swap(4, 14); swap(2, 11); swap(3, 12); swap(4, 13); swap(4, 12);
  swap(3, 11); swap(4, 11); swap(5, 17); swap(6, 18); swap(7, 19);
  swap(7, 18); swap(6, 17); swap(7, 17); swap(8, 20); swap(9, 21);
  swap(10, 22); swap(10, 21); swap(9, 20); swap(10, 20); swap(8, 17);
  swap(9, 18); swap(10, 19); swap(10, 18); swap(9, 17); swap(10, 17);
  swap(5, 11); swap(6, 12); swap(7, 13); swap(7, 12); swap(6, 11);
  swap(7, 11); swap(8, 14); swap(9, 15); swap(10, 16); swap(10, 15);
  swap(9, 14); swap(10, 14); swap(8, 11); swap(9, 12); swap(10, 13);
  swap(10, 12); swap(9, 11); swap(10, 11);
}
void sort_plan_24(swap_fn_t swap) {
  swap(1, 2); swap(0, 2); swap(0, 1); swap(4, 5); swap(3, 5);
  swap(3, 4); swap(0, 3); swap(1, 4); swap(2, 5); swap(2, 4);
  swap(1, 3); swap(2, 3); swap(7, 8); swap(6, 8); swap(6, 7);
  swap(10, 11); swap(9, 11); swap(9, 10); swap(6, 9); swap(7, 10);
  swap(8, 11); swap(8, 10); swap(7, 9); swap(8, 9); swap(0, 6);
  swap(1, 7); swap(2, 8); swap(2, 7); swap(1, 6); swap(2, 6);
  swap(3, 9); swap(4, 10); swap(5, 11); swap(5, 10); swap(4, 9);
  swap(5, 9); swap(3, 6); swap(4, 7); swap(5, 8); swap(5, 7);
  swap(4, 6); swap(5, 6); swap(13, 14); swap(12, 14); swap(12, 13);
  swap(16, 17); swap(15, 17); swap(15, 16); swap(12, 15); swap(13, 16);
  swap(14, 17); swap(14, 16); swap(13, 15); swap(14, 15); swap(19, 20);
  swap(18, 20); swap(18, 19); swap(22, 23); swap(21, 23); swap(21, 22);
  swap(18, 21); swap(19, 22); swap(20, 23); swap(20, 22); swap(19, 21);
  swap(20, 21); swap(12, 18); swap(13, 19); swap(14, 20); swap(14, 19);
  swap(13, 18); swap(14, 18); swap(15, 21); swap(16, 22); swap(17, 23);
  swap(17, 22); swap(16, 21); swap(17, 21); swap(15, 18); swap(16, 19);
  swap(17, 20); swap(17, 19); swap(16, 18); swap(17, 18); swap(0, 12);
  swap(1, 13); swap(2, 14); swap(2, 13); swap(1, 12); swap(2, 12);
  swap(3, 15); swap(4, 16); swap(5, 17); swap(5, 16); swap(4, 15);
  swap(5, 15); swap(3, 12); swap(4, 13); swap(5, 14); swap(5, 13);
  swap(4, 12); swap(5, 12); swap(6, 18); swap(7, 19); swap(8, 20);
  swap(8, 19); swap(7, 18); swap(8, 18); swap(9, 21); swap(10, 22);
  swap(11, 23); swap(11, 22); swap(10, 21); swap(11, 21); swap(9, 18);
  swap(10, 19); swap(11, 20); swap(11, 19); swap(10, 18); swap(11, 18);
  swap(6, 12); swap(7, 13); swap(8, 14); swap(8, 13); swap(7, 12);
  swap(8, 12); swap(9, 15); swap(10, 16); swap(11, 17); swap(11, 16);
  swap(10, 15); swap(11, 15); swap(9, 12); swap(10, 13); swap(11, 14);
  swap(11, 13); swap(10, 12); swap(11, 12);
}
void sort_plan_25(swap_fn_t swap) {
  swap(1, 2); swap(0, 2); swap(0, 1); swap(4, 5); swap(3, 5);
  swap(3, 4); swap(0, 3); swap(1, 4); swap(2, 5); swap(2, 4);
  swap(1, 3); swap(2, 3); swap(7, 8); swap(6, 8); swap(6, 7);
  swap(10, 11); swap(9, 11); swap(9, 10); swap(6, 9); swap(7, 10);
  swap(8, 11); swap(8, 10); swap(7, 9); swap(8, 9); swap(0, 6);
  swap(1, 7); swap(2, 8); swap(2, 7); swap(1, 6); swap(2, 6);
  swap(3, 9); swap(4, 10); swap(5, 11); swap(5, 10); swap(4, 9);
  swap(5, 9); swap(3, 6); swap(4, 7); swap(5, 8); swap(5, 7);
  swap(4, 6); swap(5, 6); swap(13, 14); swap(12, 14); swap(12, 13);
  swap(16, 17); swap(15, 17); swap(15, 16); swap(12, 15); swap(13, 16);
  swap(14, 17); swap(14, 16); swap(13, 15); swap(14, 15); swap(19, 20);
  swap(18, 20); swap(18, 19); swap(21, 22); swap(23, 24); swap(21, 23);
  swap(22, 24); swap(22, 23); swap(18, 22); swap(18, 21); swap(19, 23);
  swap(20, 24); swap(20, 23); swap(19, 21); swap(20, 22); swap(20, 21);
  swap(12, 19); swap(12, 18); swap(13, 20); swap(14, 21); swap(14, 20);
  swap(13, 18); swap(14, 19); swap(14, 18); swap(15, 22); swap(16, 23);
  swap(17, 24); swap(17, 23); swap(16, 22); swap(17, 22); swap(15, 19);
  swap(15, 18); swap(16, 20); swap(17, 21); swap(17, 20); swap(16, 18);
  swap(17, 19); swap(17, 18); swap(0, 13); swap(0, 12); swap(1, 14);
  swap(2, 15); swap(2, 14); swap(1, 12); swap(2, 13); swap(2, 12);
  swap(3, 16); swap(4, 17); swap(5, 18); swap(5, 17); swap(4, 16);
  swap(5, 16); swap(3, 13); swap(3, 12); swap(4, 14); swap(5, 15);
  swap(5, 14); swap(4, 12); swap(5, 13); swap(5, 12); swap(6, 19);
  swap(7, 20); swap(8, 21); swap(8, 20); swap(7, 19); swap(8, 19);
  swap(9, 22); swap(10, 23); swap(11, 24); swap(11, 23); swap(10, 22);
  swap(11, 22); swap(9, 19); swap(10, 20); swap(11, 21); swap(11, 20);
  swap(10, 19); swap(11, 19); swap(6, 13); swap(6, 12); swap(7, 14);
  swap(8, 15); swap(8, 14); swap(7, 12); swap(8, 13); swap(8, 12);
  swap(9, 16); swap(10, 17); swap(11, 18); swap(11, 17); swap(10, 16);
  swap(11, 16); swap(9, 13); swap(9, 12); swap(10, 14); swap(11, 15);
  swap(11, 14); swap(10, 12); swap(11, 13); swap(11, 12);
}
void sort_plan_26(swap_fn_t swap) {
  swap(1, 2); swap(0, 2); swap(0, 1); swap(4, 5); swap(3, 5);
  swap(3, 4); swap(0, 3); swap(1, 4); swap(2, 5); swap(2, 4);
  swap(1, 3); swap(2, 3); swap(7, 8); swap(6, 8); swap(6, 7);
  swap(9, 10); swap(11, 12); swap(9, 11); swap(10, 12); swap(10, 11);
  swap(6, 10); swap(6, 9); swap(7, 11); swap(8, 12); swap(8, 11);
  swap(7, 9); swap(8, 10); swap(8, 9); swap(0, 7); swap(0, 6);
  swap(1, 8); swap(2, 9); swap(2, 8); swap(1, 6); swap(2, 7);
  swap(2, 6); swap(3, 10); swap(4, 11); swap(5, 12); swap(5, 11);
  swap(4, 10); swap(5, 10); swap(3, 7); swap(3, 6); swap(4, 8);
  swap(5, 9); swap(5, 8); swap(4, 6); swap(5, 7); swap(5, 6);
  swap(14, 15); swap(13, 15); swap(13, 14); swap(17, 18); swap(16, 18);
  swap(16, 17); swap(13, 16); swap(14, 17); swap(15, 18); swap(15, 17);
  swap(14, 16); swap(15, 16); swap(20, 21); swap(19, 21); swap(19, 20);
  swap(22, 23); swap(24, 25); swap(22, 24); swap(23, 25); swap(23, 24);
  swap(19, 23); swap(19, 22); swap(20, 24); swap(21, 25); swap(21, 24);
  swap(20, 22); swap(21, 23); swap(21, 22); swap(13, 20); swap(13, 19);
  swap(14, 21); swap(15, 22); swap(15, 21); swap(14, 19); swap(15, 20);
  swap(15, 19); swap(16, 23); swap(17, 24); swap(18, 25); swap(18, 24);
  swap(17, 23); swap(18, 23); swap(16, 20); swap(16, 19); swap(17, 21);
  swap(18, 22); swap(18, 21); swap(17, 19); swap(18, 20); swap(18, 19);
  swap(0, 13); swap(1, 14); swap(2, 15); swap(2, 14); swap(1, 13);
  swap(2, 13); swap(3, 16); swap(4, 17); swap(5, 18); swap(5, 17);
  swap(4, 16); swap(5, 16); swap(3, 13); swap(4, 14); swap(5, 15);
  swap(5, 14); swap(4, 13); swap(5, 13); swap(6, 19); swap(7, 20);
  swap(8, 21); swap(8, 20); swap(7, 19); swap(8, 19); swap(9, 22);
  swap(10, 23); swap(10, 22); swap(11, 24); swap(12, 25); swap(12, 24);
  swap(11, 22); swap(12, 23); swap(12, 22); swap(9, 19); swap(10, 20);
  swap(10, 19); swap(11, 21); swap(12, 21); swap(11, 19); swap(12, 20);
  swap(12, 19); swap(6, 13); swap(7, 14); swap(8, 15); swap(8, 14);
  swap(7, 13); swap(8, 13); swap(9, 16); swap(10, 17); swap(10, 16);
  swap(11, 18); swap(12, 18); swap(11, 16); swap(12, 17); swap(12, 16);
  swap(9, 13); swap(10, 14); swap(10, 13); swap(11, 15); swap(12, 15);
  swap(11, 13); swap(12, 14); swap(12, 13);
}
void sort_plan_27(swap_fn_t swap) {
  swap(1, 2); swap(0, 2); swap(0, 1); swap(4, 5); swap(3, 5);
  swap(3, 4); swap(0, 3); swap(1, 4); swap(2, 5); swap(2, 4);
  swap(1, 3); swap(2, 3); swap(7, 8); swap(6, 8); swap(6, 7);
  swap(9, 10); swap(11, 12); swap(9, 11); swap(10, 12); swap(10, 11);
  swap(6, 10); swap(6, 9); swap(7, 11); swap(8, 12); swap(8, 11);
  swap(7, 9); swap(8, 10); swap(8, 9); swap(0, 7); swap(0, 6);
  swap(1, 8); swap(2, 9); swap(2, 8); swap(1, 6); swap(2, 7);
  swap(2, 6); swap(3, 10); swap(4, 11); swap(5, 12); swap(5, 11);
  swap(4, 10); swap(5, 10); swap(3, 7); swap(3, 6); swap(4, 8);
  swap(5, 9); swap(5, 8); swap(4, 6); swap(5, 7); swap(5, 6);
  swap(14, 15); swap(13, 15); swap(13, 14); swap(16, 17); swap(18, 19);
  swap(16, 18); swap(17, 19); swap(17, 18); swap(13, 17); swap(13, 16);
  swap(14, 18); swap(15, 19); swap(15, 18); swap(14, 16); swap(15, 17);
  swap(15, 16); swap(21, 22); swap(20, 22); swap(20, 21); swap(23, 24);
  swap(25, 26); swap(23, 25); swap(24, 26); swap(24, 25); swap(20, 24);
  swap(20, 23); swap(21, 25); swap(22, 26); swap(22, 25); swap(21, 23);
  swap(22, 24); swap(22, 23); swap(13, 20); swap(14, 21); swap(15, 22);
  swap(15, 21); swap(14, 20); swap(15, 20); swap(16, 23); swap(17, 24);
  swap(17, 23); swap(18, 25); swap(19, 26); swap(19, 25); swap(18, 23);
  swap(19, 24); swap(19, 23); swap(16, 20); swap(17, 21); swap(17, 20);
  swap(18, 22); swap(19, 22); swap(18, 20); swap(19, 21); swap(19, 20);
  swap(0, 14); swap(0, 13); swap(1, 15); swap(2, 16); swap(2, 15);
  swap(1, 13); swap(2, 14); swap(2, 13); swap(3, 17); swap(4, 18);
  swap(5, 19); swap(5, 18); swap(4, 17); swap(5, 17); swap(3, 14);
  swap(3, 13); swap(4, 15); swap(5, 16); swap(5, 15); swap(4, 13);
  swap(5, 14); swap(5, 13); swap(6, 20); swap(7, 21); swap(8, 22);
  swap(8, 21); swap(7, 20); swap(8, 20); swap(9, 23); swap(10, 24);
  swap(10, 23); swap(11, 25); swap(12, 26); swap(12, 25); swap(11, 23);
  swap(12, 24); swap(12, 23); swap(9, 20); swap(10, 21); swap(10, 20);
  swap(11, 22); swap(12, 22); swap(11, 20); swap(12, 21); swap(12, 20);
  swap(6, 13); swap(7, 14); swap(8, 15); swap(8, 14); swap(7, 13);
  swap(8, 13); swap(9, 16); swap(10, 17); swap(10, 16); swap(11, 18);
  swap(12, 19); swap(12, 18); swap(11, 16); swap(12, 17); swap(12, 16);
  swap(9, 13); swap(10, 14); swap(10, 13); swap(11, 15); swap(12, 15);
  swap(11, 13); swap(12, 14); swap(12, 13);
}
void sort_plan_28(swap_fn_t swap) {
  swap(1, 2); swap(0, 2); swap(0, 1); swap(3, 4); swap(5, 6);
  swap(3, 5); swap(4, 6); swap(4, 5); swap(0, 4); swap(0, 3);
  swap(1, 5); swap(2, 6); swap(2, 5); swap(1, 3); swap(2, 4);
  swap(2, 3); swap(8, 9); swap(7, 9); swap(7, 8); swap(10, 11);
  swap(12, 13); swap(10, 12); swap(11, 13); swap(11, 12); swap(7, 11);
  swap(7, 10); swap(8, 12); swap(9, 13); swap(9, 12); swap(8, 10);
  swap(9, 11); swap(9, 10); swap(0, 7); swap(1, 8); swap(2, 9);
  swap(2, 8); swap(1, 7); swap(2, 7); swap(3, 10); swap(4, 11);
  swap(4, 10); swap(5, 12); swap(6, 13); swap(6, 12); swap(5, 10);
  swap(6, 11); swap(6, 10); swap(3, 7); swap(4, 8); swap(4, 7);
  swap(5, 9); swap(6, 9); swap(5, 7); swap(6, 8); swap(6, 7);
  swap(15, 16); swap(14, 16); swap(14, 15); swap(17, 18); swap(19, 20);
  swap(17, 19); swap(18, 20); swap(18, 19); swap(14, 18); swap(14, 17);
  swap(15, 19); swap(16, 20); swap(16, 19); swap(15, 17); swap(16, 18);
  swap(16, 17); swap(22, 23); swap(21, 23); swap(21, 22); swap(24, 25);
  swap(26, 27); swap(24, 26); swap(25, 27); swap(25, 26); swap(21, 25);
  swap(21, 24); swap(22, 26); swap(23, 27); swap(23, 26); swap(22, 24);
  swap(23, 25); swap(23, 24); swap(14, 21); swap(15, 22); swap(16, 23);
  swap(16, 22); swap(15, 21); swap(16, 21); swap(17, 24); swap(18, 25);
  swap(18, 24); swap(19, 26); swap(20, 27); swap(20, 26); swap(19, 24);
  swap(20, 25); swap(20, 24); swap(17, 21); swap(18, 22); swap(18, 21);
  swap(19, 23); swap(20, 23); swap(19, 21); swap(20, 22); swap(20, 21);
  swap(0, 14); swap(1, 15); swap(2, 16); swap(2, 15); swap(1, 14);
  swap(2, 14); swap(3, 17); swap(4, 18); swap(4, 17); swap(5, 19);
  swap(6, 20); swap(6, 19); swap(5, 17); swap(6, 18); swap(6, 17);
  swap(3, 14); swap(4, 15); swap(4, 14); swap(5, 16); swap(6, 16);
  swap(5, 14); swap(6, 15); swap(6, 14); swap(7, 21); swap(8, 22);
  swap(9, 23); swap(9, 22); swap(8, 21); swap(9, 21); swap(10, 24);
  swap(11, 25); swap(11, 24); swap(12, 26); swap(13, 27); swap(13, 26);
  swap(12, 24); swap(13, 25); swap(13, 24); swap(10, 21); swap(11, 22);
  swap(11, 21); swap(12, 23); swap(13, 23); swap(12, 21); swap(13, 22);
  swap(13, 21); swap(7, 14); swap(8, 15); swap(9, 16); swap(9, 15);
  swap(8, 14); swap(9, 14); swap(10, 17); swap(11, 18); swap(11, 17);
  swap(12, 19); swap(13, 20); swap(13, 19); swap(12, 17); swap(13, 18);
  swap(13, 17); swap(10, 14); swap(11, 15); swap(11, 14); swap(12, 16);
  swap(13, 16); swap(12, 14); swap(13, 15); swap(13, 14);
}
void sort_plan_29(swap_fn_t swap) {
  swap(1, 2); swap(0, 2); swap(0, 1); swap(3, 4); swap(5, 6);
  swap(3, 5); swap(4, 6); swap(4, 5); swap(0, 4); swap(0, 3);
  swap(1, 5); swap(2, 6); swap(2, 5); swap(1, 3); swap(2, 4);
  swap(2, 3); swap(8, 9); swap(7, 9); swap(7, 8); swap(10, 11);
  swap(12, 13); swap(10, 12); swap(11, 13); swap(11, 12); swap(7, 11);
  swap(7, 10); swap(8, 12); swap(9, 13); swap(9, 12); swap(8, 10);
  swap(9, 11); swap(9, 10); swap(0, 7); swap(1, 8); swap(2, 9);
  swap(2, 8); swap(1, 7); swap(2, 7); swap(3, 10); swap(4, 11);
  swap(4, 10); swap(5, 12); swap(6, 13); swap(6, 12); swap(5, 10);
  swap(6, 11); swap(6, 10); swap(3, 7); swap(4, 8); swap(4, 7);
  swap(5, 9); swap(6, 9); swap(5, 7); swap(6, 8); swap(6, 7);
  swap(15, 16); swap(14, 16); swap(14, 15); swap(17, 18); swap(19, 20);
  swap(17, 19); swap(18, 20); swap(18, 19); swap(14, 18); swap(14, 17);
  swap(15, 19); swap(16, 20); swap(16, 19); swap(15, 17); swap(16, 18);
  swap(16, 17); swap(21, 22); swap(23, 24); swap(21, 23); swap(22, 24);
  swap(22, 23); swap(25, 26); swap(27, 28); swap(25, 27); swap(26, 28);
  swap(26, 27); swap(21, 25); swap(22, 26); swap(22, 25); swap(23, 27);
  swap(24, 28); swap(24, 27); swap(23, 25); swap(24, 26); swap(24, 25);
  swap(14, 22); swap(14, 21); swap(15, 23); swap(16, 24); swap(16, 23);
  swap(15, 21); swap(16, 22); swap(16, 21); swap(17, 25); swap(18, 26);
  swap(18, 25); swap(19, 27); swap(20, 28); swap(20, 27); swap(19, 25);
  swap(20, 26); swap(20, 25); swap(17, 21); swap(18, 22); swap(18, 21);
  swap(19, 23); swap(20, 24); swap(20, 23); swap(19, 21); swap(20, 22);
  swap(20, 21); swap(0, 15); swap(0, 14); swap(1, 16); swap(2, 17);
  swap(2, 16); swap(1, 14); swap(2, 15); swap(2, 14); swap(3, 18);
  swap(4, 19); swap(4, 18); swap(5, 20); swap(6, 21); swap(6, 20);
  swap(5, 18); swap(6, 19); swap(6, 18); swap(3, 14); swap(4, 15);
  swap(4, 14); swap(5, 16); swap(6, 17); swap(6, 16); swap(5, 14);
  swap(6, 15); swap(6, 14); swap(7, 22); swap(8, 23); swap(9, 24);
  swap(9, 23); swap(8, 22); swap(9, 22); swap(10, 25); swap(11, 26);
  swap(11, 25); swap(12, 27); swap(13, 28); swap(13, 27); swap(12, 25);
  swap(13, 26); swap(13, 25); swap(10, 22); swap(11, 23); swap(11, 22);
  swap(12, 24); swap(13, 24); swap(12, 22); swap(13, 23); swap(13, 22);
  swap(7, 15); swap(7, 14); swap(8, 16); swap(9, 17); swap(9, 16);
  swap(8, 14); swap(9, 15); swap(9, 14); swap(10, 18); swap(11, 19);
  swap(11, 18); swap(12, 20); swap(13, 21); swap(13, 20); swap(12, 18);
  swap(13, 19); swap(13, 18); swap(10, 14); swap(11, 15); swap(11, 14);
  swap(12, 16); swap(13, 17); swap(13, 16); swap(12, 14); swap(13, 15);
  swap(13, 14);
}
void sort_plan_30(swap_fn_t swap) {
  swap(1, 2); swap(0, 2); swap(0, 1); swap(3, 4); swap(5, 6);
  swap(3, 5); swap(4, 6); swap(4, 5); swap(0, 4); swap(0, 3);
  swap(1, 5); swap(2, 6); swap(2, 5); swap(1, 3); swap(2, 4);
  swap(2, 3); swap(7, 8); swap(9, 10); swap(7, 9); swap(8, 10);
  swap(8, 9); swap(11, 12); swap(13, 14); swap(11, 13); swap(12, 14);
  swap(12, 13); swap(7, 11); swap(8, 12); swap(8, 11); swap(9, 13);
  swap(10, 14); swap(10, 13); swap(9, 11); swap(10, 12); swap(10, 11);
  swap(0, 8); swap(0, 7); swap(1, 9); swap(2, 10); swap(2, 9);
  swap(1, 7); swap(2, 8); swap(2, 7); swap(3, 11); swap(4, 12);
  swap(4, 11); swap(5, 13); swap(6, 14); swap(6, 13); swap(5, 11);
  swap(6, 12); swap(6, 11); swap(3, 7); swap(4, 8); swap(4, 7);
  swap(5, 9); swap(6, 10); swap(6, 9); swap(5, 7); swap(6, 8);
  swap(6, 7); swap(16, 17); swap(15, 17); swap(15, 16); swap(18, 19);
  swap(20, 21); swap(18, 20); swap(19, 21); swap(19, 20); swap(15, 19);
  swap(15, 18); swap(16, 20); swap(17, 21); swap(17, 20); swap(16, 18);
  swap(17, 19); swap(17, 18); swap(22, 23); swap(24, 25); swap(22, 24);
  swap(23, 25); swap(23, 24); swap(26, 27); swap(28, 29); swap(26, 28);
  swap(27, 29); swap(27, 28); swap(22, 26); swap(23, 27); swap(23, 26);
  swap(24, 28); swap(25, 29); swap(25, 28); swap(24, 26); swap(25, 27);
  swap(25, 26); swap(15, 23); swap(15, 22); swap(16, 24); swap(17, 25);
  swap(17, 24); swap(16, 22); swap(17, 23); swap(17, 22); swap(18, 26);
  swap(19, 27); swap(19, 26); swap(20, 28); swap(21, 29); swap(21, 28);
  swap(20, 26); swap(21, 27); swap(21, 26); swap(18, 22); swap(19, 23);
  swap(19, 22); swap(20, 24); swap(21, 25); swap(21, 24); swap(20, 22);
  swap(21, 23); swap(21, 22); swap(0, 15); swap(1, 16); swap(2, 17);
  swap(2, 16); swap(1, 15); swap(2, 15); swap(3, 18); swap(4, 19);
  swap(4, 18); swap(5, 20); swap(6, 21); swap(6, 20); swap(5, 18);
  swap(6, 19); swap(6, 18); swap(3, 15); swap(4, 16); swap(4, 15);
  swap(5, 17); swap(6, 17); swap(5, 15); swap(6, 16); swap(6, 15);
  swap(7, 22); swap(8, 23); swap(8, 22); swap(9, 24); swap(10, 25);
  swap(10, 24); swap(9, 22); swap(10, 23); swap(10, 22); swap(11, 26);
  swap(12, 27); swap(12, 26); swap(13, 28); swap(14, 29); swap(14, 28);
  swap(13, 26); swap(14, 27); swap(14, 26); swap(11, 22); swap(12, 23);
  swap(12, 22); swap(13, 24); swap(14, 25); swap(14, 24); swap(13, 22);
  swap(14, 23); swap(14, 22); swap(7, 15); swap(8, 16); swap(8, 15);
  swap(9, 17); swap(10, 18); swap(10, 17); swap(9, 15); swap(10, 16);
  swap(10, 15); swap(11, 19); swap(12, 20); swap(12, 19); swap(13, 21);
  swap(14, 21); swap(13, 19); swap(14, 20); swap(14, 19); swap(11, 15);
  swap(12, 16); swap(12, 15); swap(13, 17); swap(14, 18); swap(14, 17);
  swap(13, 15); swap(14, 16); swap(14, 15);
}

typedef void (*sort_plan_fn)(swap_fn_t cmp_swap);

int n_sort_fns;
sort_plan_fn* sort_fns;

int bose_sort(int n, swap_fn_t cmp_swap) {
  if (n<2 || n>n_sort_fns) return -1;
  sort_fns[n](cmp_swap);
  return 0;
};

void ConstructSortPlans (void) __attribute__ ((constructor));
void ConstructSortPlans (void) {
  n_sort_fns= 30;
  sort_fns= malloc(31 * sizeof(sort_plan_fn));
  sort_fns[2]= sort_plan_2;
  sort_fns[3]= sort_plan_3;
  sort_fns[4]= sort_plan_4;
  sort_fns[5]= sort_plan_5;
  sort_fns[6]= sort_plan_6;
  sort_fns[7]= sort_plan_7;
  sort_fns[8]= sort_plan_8;
  sort_fns[9]= sort_plan_9;
  sort_fns[10]= sort_plan_10;
  sort_fns[11]= sort_plan_11;
  sort_fns[12]= sort_plan_12;
  sort_fns[13]= sort_plan_13;
  sort_fns[14]= sort_plan_14;
  sort_fns[15]= sort_plan_15;
  sort_fns[16]= sort_plan_16;
  sort_fns[17]= sort_plan_17;
  sort_fns[18]= sort_plan_18;
  sort_fns[19]= sort_plan_19;
  sort_fns[20]= sort_plan_20;
  sort_fns[21]= sort_plan_21;
  sort_fns[22]= sort_plan_22;
  sort_fns[23]= sort_plan_23;
  sort_fns[24]= sort_plan_24;
  sort_fns[25]= sort_plan_25;
  sort_fns[26]= sort_plan_26;
  sort_fns[27]= sort_plan_27;
  sort_fns[28]= sort_plan_28;
  sort_fns[29]= sort_plan_29;
  sort_fns[30]= sort_plan_30;
}
