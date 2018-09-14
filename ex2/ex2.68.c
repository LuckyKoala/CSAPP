#include <stdio.h>
#include "../util/printer.h"

/*
  Mask with least signficant n bits set to 1
  Example: n = 6 --> 0x3F, n = 17 --> 0x1FFF
  Assume 1 <= n <= w
  要注意n=w的情况
 */
int lower_one_mask(int n) {
  unsigned x = 1<<(n-1);
  x |= x>>1;
  x |= x>>2;
  x |= x>>4;
  x |= x>>8;
  x |= x>>16;
  return x;
}

int main(void) {
  printf("n = 1 --> ");
  show_int(lower_one_mask(1));
  printf("n = 6 --> ");
  show_int(lower_one_mask(6));
  printf("n = 17 --> ");
  show_int(lower_one_mask(17));
  printf("n = w --> ");
  show_int(lower_one_mask(sizeof(int)<<3));

  return 0;
}
