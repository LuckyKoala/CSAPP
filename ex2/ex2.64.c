#include <stdio.h>

int any_odd_one(unsigned x)
{
  int mask = 0x55555555; // if index start with 1, eg 1...32
  return !!(x & mask);
}

/*
  Return 1 when any odd bit of x equals 1; 0 otherwise.
  Assume w=32
 */
int main(void)
{
  printf("Testing:\n");
  printf("0x0 has any odd one -> %d\n", any_odd_one(0x0));
  printf("0x1 has any odd one -> %d\n", any_odd_one(0x1));
  printf("0x2 has any odd one -> %d\n", any_odd_one(0x2));
  printf("0x3 has any odd one -> %d\n", any_odd_one(0x3));
  printf("0x4 has any odd one -> %d\n", any_odd_one(0x4));
  return 0;
}
