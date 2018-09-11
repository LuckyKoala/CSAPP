#include <stdio.h>

unsigned srl(unsigned x, int k)
{
  unsigned xsra = (int) x >> k;

  int mask = ~((~0)<<((sizeof(int)<<3)-k));
  return xsra & mask;
}

int sra(int x, int k)
{
  int xsrl = (unsigned) x >> k;

  int highest_ones = (~0)<<((sizeof(int)<<3)-k); //11110000xxxx0000
  int highest_one_mask = (~0)<<((sizeof(int)<<3)-1); //1000xxxxxxxx0000
  //int mask = highest_ones & !!(highest_one_mask & x)
  return xsrl | mask;
}

/*
  将下面的C函数代码补充完整。函数srl用算术右移（由值xsra给出）来完成逻辑右移，后面的其他操作不包括右移或者除法。函数sra用逻辑右移(由值xsrl给出)来完成算术右移，后面的其他操作不包括右移或者除法。可以通过计算8*sizeof(int)来确定数据类型int中的位数w。位移量k的取值范围为0~w-1。
 */

int main(void)
{
  //To be continued
}
