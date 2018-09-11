#include <stdio.h>
#include "../util/printer.h"

int leftmost_one(unsigned x)
{
  x |= x>>1;
  x |= x>>2;
  x |= x>>4;
  x |= x>>8;
  x |= x>>16;
  x ^= x>>1;
  return x;
}

/*
  Generate mask indicating leftmost 1 in x. Assume w=32.
  For example, 0xFF00 -> 0x8000, and 0x6600 -> 0x4000.
  If x = 0, then return 0.
  你的代码最多只能包含15个算术运算、位运算和逻辑运算。
  提示： 先将x转换成形如[0...011...1]的位向量。
 */
int main(void)
{
  printf("Testing:\n");
  printf("0xFF00 -> ");
  show_int(leftmost_one(0xFF00));
  printf("0x6600 -> ");
  show_int(leftmost_one(0x6600));
  printf("0x1F00 -> ");
  show_int(leftmost_one(0x1F00));
  printf("0x00A0 -> ");
  show_int(leftmost_one(0x00A0));
  return 0;
}
