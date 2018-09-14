#include <stdio.h>
#include "../util/printer.h"

/*
  Do rotating left shift. Assume 0 <= n < w
  Examples when x = 0x12345678 and w = 32;
     n=4 -> 0x23456781, n=20 -> 0x67812345
  要注意n=0的情况
 */
unsigned rotate_left(unsigned x, int n) {
  size_t w = sizeof(unsigned)<<3;
  unsigned mask = (~0)<<(w-n);
  unsigned left = x & mask;
  return (x<<n) | (left>>(w-n));
}

int main(void) {
  unsigned x = 0x12345678;
  printf("x = 0x12345678\n");
  printf("\t n = 0  => ");
  show_int(rotate_left(x, 0));
  printf("\t n = 4  => ");
  show_int(rotate_left(x, 4));
  printf("\t n = 20 => ");
  show_int(rotate_left(x, 20));

  return 0;
}
