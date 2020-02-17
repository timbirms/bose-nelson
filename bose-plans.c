// -*- mode: text -*-
//auto-generated sort-networks/plans for n= 2..25

#include <stdlib.h>
#include "bose-plans.h"

void sort_best_2(swap_fn_t swap) {
  swap(0, 1);
}
void sort_best_3(swap_fn_t swap) {
  swap(1, 2); swap(0, 2); swap(0, 1);
}
void sort_best_4(swap_fn_t swap) {
  swap(0, 1); swap(2, 3); swap(0, 2); swap(1, 3); swap(1, 2);
}
void sort_best_5(swap_fn_t swap) {
  swap(0, 1); swap(3, 4); swap(2, 4); swap(2, 3); swap(0, 3);
  swap(0, 2); swap(1, 4); swap(1, 3); swap(1, 2);
}
void sort_best_6(swap_fn_t swap) {
  swap(1, 2); swap(0, 2); swap(0, 1); swap(4, 5); swap(3, 5);
  swap(3, 4); swap(0, 3); swap(1, 4); swap(2, 5); swap(2, 4);
  swap(1, 3); swap(2, 3);
}
void sort_best_7(swap_fn_t swap) {
  swap(1, 2); swap(0, 2); swap(0, 1); swap(3, 4); swap(5, 6);
  swap(3, 5); swap(4, 6); swap(4, 5); swap(0, 4); swap(0, 3);
  swap(1, 5); swap(2, 6); swap(2, 5); swap(1, 3); swap(2, 4);
  swap(2, 3);
}
void sort_best_8(swap_fn_t swap) {
  swap(0, 1); swap(2, 3); swap(0, 2); swap(1, 3); swap(1, 2);
  swap(4, 5); swap(6, 7); swap(4, 6); swap(5, 7); swap(5, 6);
  swap(0, 4); swap(1, 5); swap(1, 4); swap(2, 6); swap(3, 7);
  swap(3, 6); swap(2, 4); swap(3, 5); swap(3, 4);
}
void sort_best_9(swap_fn_t swap) {
  swap(0, 1); swap(3, 4); swap(6, 7); swap(1, 2); swap(4, 5);
  swap(7, 8); swap(0, 1); swap(3, 4); swap(6, 7); swap(0, 3);
  swap(3, 6); swap(0, 3); swap(1, 4); swap(4, 7); swap(1, 4);
  swap(2, 5); swap(5, 8); swap(2, 5); swap(1, 3); swap(5, 7);
  swap(2, 6); swap(4, 6); swap(2, 4); swap(2, 3); swap(5, 6);
}
void sort_best_10(swap_fn_t swap) {
  swap(4, 9); swap(3, 8); swap(2, 7); swap(1, 6); swap(0, 5);
  swap(1, 4); swap(6, 9); swap(0, 3); swap(5, 8); swap(0, 2);
  swap(3, 6); swap(7, 9); swap(0, 1); swap(2, 4); swap(5, 7);
  swap(8, 9); swap(1, 2); swap(4, 6); swap(7, 8); swap(3, 5);
  swap(2, 5); swap(6, 8); swap(1, 3); swap(4, 7); swap(2, 3);
  swap(6, 7); swap(3, 4); swap(5, 6); swap(4, 5);
}
void sort_best_11(swap_fn_t swap) {
  swap(0, 1); swap(2, 3); swap(4, 5); swap(6, 7); swap(8, 9);
  swap(1, 3); swap(5, 7); swap(0, 2); swap(4, 6); swap(8, 10);
  swap(1, 2); swap(5, 6); swap(9, 10); swap(1, 5); swap(6, 10);
  swap(5, 9); swap(2, 6); swap(1, 5); swap(6, 10); swap(0, 4);
  swap(3, 7); swap(4, 8); swap(0, 4); swap(1, 4); swap(7, 10);
  swap(3, 8); swap(2, 3); swap(8, 9); swap(2, 4); swap(7, 9);
  swap(3, 5); swap(6, 8); swap(3, 4); swap(5, 6); swap(7, 8);
}
void sort_best_12(swap_fn_t swap) {
  swap(0, 1); swap(2, 3); swap(4, 5); swap(6, 7); swap(8, 9);
  swap(10, 11); swap(1, 3); swap(5, 7); swap(9, 11); swap(0, 2);
  swap(4, 6); swap(8, 10); swap(1, 2); swap(5, 6); swap(9, 10);
  swap(1, 5); swap(6, 10); swap(5, 9); swap(2, 6); swap(1, 5);
  swap(6, 10); swap(0, 4); swap(7, 11); swap(3, 7); swap(4, 8);
  swap(0, 4); swap(7, 11); swap(1, 4); swap(7, 10); swap(3, 8);
  swap(2, 3); swap(8, 9); swap(2, 4); swap(7, 9); swap(3, 5);
  swap(6, 8); swap(3, 4); swap(5, 6); swap(7, 8);
}
void sort_best_13(swap_fn_t swap) {
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
void sort_best_14(swap_fn_t swap) {
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
void sort_best_15(swap_fn_t swap) {
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
void sort_best_16(swap_fn_t swap) {
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
void sort_best_17(swap_fn_t swap) {
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
void sort_best_18(swap_fn_t swap) {
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
void sort_best_19(swap_fn_t swap) {
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
void sort_best_20(swap_fn_t swap) {
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
void sort_best_21(swap_fn_t swap) {
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
void sort_best_22(swap_fn_t swap) {
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
void sort_best_23(swap_fn_t swap) {
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
void sort_best_24(swap_fn_t swap) {
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
void sort_best_25(swap_fn_t swap) {
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

void ConstructSortPlans (void) __attribute__ ((constructor));
void ConstructSortPlans (void) {
  sort_best_fns_n= 25;
  sort_best_fns= malloc(26 * sizeof(sort_best));
  sort_best_fns[2]= sort_best_2;
  sort_best_fns[3]= sort_best_3;
  sort_best_fns[4]= sort_best_4;
  sort_best_fns[5]= sort_best_5;
  sort_best_fns[6]= sort_best_6;
  sort_best_fns[7]= sort_best_7;
  sort_best_fns[8]= sort_best_8;
  sort_best_fns[9]= sort_best_9;
  sort_best_fns[10]= sort_best_10;
  sort_best_fns[11]= sort_best_11;
  sort_best_fns[12]= sort_best_12;
  sort_best_fns[13]= sort_best_13;
  sort_best_fns[14]= sort_best_14;
  sort_best_fns[15]= sort_best_15;
  sort_best_fns[16]= sort_best_16;
  sort_best_fns[17]= sort_best_17;
  sort_best_fns[18]= sort_best_18;
  sort_best_fns[19]= sort_best_19;
  sort_best_fns[20]= sort_best_20;
  sort_best_fns[21]= sort_best_21;
  sort_best_fns[22]= sort_best_22;
  sort_best_fns[23]= sort_best_23;
  sort_best_fns[24]= sort_best_24;
  sort_best_fns[25]= sort_best_25;
}
