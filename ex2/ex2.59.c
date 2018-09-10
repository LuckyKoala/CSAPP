#include <stdio.h>

typedef unsigned char *byte_pointer;

unsigned combine(unsigned a, unsigned b)
{
    return (a & 0xFF) | (b & ~0xFF);
}

/*
  编写一个C表达式，它生成一个字，由x的最低有效字节和y中剩下的字节组成。
  对于运算数x=0x89ABCDEF和y=0x76543210，就得到0x765432EF。
 */
int main(int argc, char const* argv[])
{
    unsigned a = 0x89ABCDEF;
    unsigned b = 0x76543210;
    printf("%.2x\n" , combine(a, b));
    return 0;
}
