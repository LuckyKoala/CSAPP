#include <stdio.h>

int odd_ones(unsigned x)
{
  x ^= x>>16;
  x ^= x>>8;
  x ^= x>>4;
  x ^= x>>2;
  x ^= x>>1;
  x &= 0x1;
  return x;
}

/*
  Return 1 when x contains an odd number of 1s; 0 otherwise.
  Assume w=32
  你的代码最多只能包含12个算术运算、位运算和逻辑运算。
 */
int main(void)
{
  printf("Testing:\n");
  printf("0x0 has an odd number of 1s -> %d\n", odd_ones(0x0));
  printf("0x1 has an odd number of 1s -> %d\n", odd_ones(0x1));
  printf("0x2 has an odd number of 1s -> %d\n", odd_ones(0x2));
  printf("0x3 has an odd number of 1s -> %d\n", odd_ones(0x3));
  printf("0x4 has an odd number of 1s -> %d\n", odd_ones(0x4));
  printf("0x8 has an odd number of 1s -> %d\n", odd_ones(0x8));
  printf("0x9 has an odd number of 1s -> %d\n", odd_ones(0x9));
  printf("0x11 has an odd number of 1s -> %d\n", odd_ones(0x11));
  return 0;
}
