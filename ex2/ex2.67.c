#include <stdio.h>

int bad_int_size_is_32() {
  int set_msb = 1 << 31;
  int beyond_msb = 1 << 32;
  return set_msb && !beyond_msb;
}

int int_size_is_32_for_least32() {
  int set_msb = 1<<31;
  int beyond_msb = 1<<31;
  beyond_msb = beyond_msb<<1;
  return set_msb && !beyond_msb;
}

int int_size_is_32_for_least16() {
  int set_msb = 1<<31;
  int beyond_msb = 1<<15;
  beyond_msb = beyond_msb<<15;
  beyond_msb = beyond_msb<<2;
  return set_msb && !beyond_msb;
}

/*
  给你一个任务，编写一个过程int_size_is_32()，当在一个int是32位的机器上运行时，该程序产生1，
  而其他情况则产生0.不允许使用sizeof运算符。
  Warning: left shift count >= width of type
 */
int main(void) {
  printf("bad : %d\n", bad_int_size_is_32());
  printf("int is 32 for least 32 : %d\n", int_size_is_32_for_least32());
  printf("int is 32 for least 16 : %d\n", int_size_is_32_for_least16());

  return 0;
}
