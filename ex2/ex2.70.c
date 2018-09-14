#include <stdio.h>

/*
  Return 1 when x can be represented as an n-bit, 2's-complement
  number; 0 otherwise
  Assume 1 <= n <= w
 */
int fits_bits(int x, int n) {
  int mask = ~((~0)<<n);
  return x == (x & mask);
}

int main(void) {
  printf("Testing...\n");
  int w = sizeof(int)<<3;
  printf("fits_bits(1, 1) = %d\n", fits_bits(1,1));
  printf("fits_bits(1, w) = %d\n", fits_bits(1,w));
  printf("fits_bits(-1, 1) = %d\n", fits_bits(-1,1));
  printf("fits_bits(-1, w) = %d\n", fits_bits(-1,w));

  return 0;
}
