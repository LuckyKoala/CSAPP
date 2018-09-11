#include <stdio.h>

int int_shifts_are_arithmetic()
{
  return !(((~0)>>((sizeof(int)-1)<<3))+1);
}

/*
  编写一个函数int_shifts_are_arithmetic()，在对int类型的数进行算术右移的机器上运行时这个函数生成1，而其他情况下生成0.你的代码应该可以运行在任何字长的机器上。在这几种机器上测试你的代码。
 */
int main(int argc, char const* argv[])
{
  printf("int shifts are arithmetic: %d\n", int_shifts_are_arithmetic());
}
