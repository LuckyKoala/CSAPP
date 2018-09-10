#include <stdio.h>

typedef unsigned char *byte_pointer;

unsigned replace_bytes(unsigned x, int i, unsigned char b)
{
    byte_pointer val = (byte_pointer) &x;
    val[i] = b;
    return x;
}

/*
  假设我们将一个w位的字中的字节从0（最低位）到w/8-1（最高位）编号。写出下面C函数的代码，它会返回一个无符号值，其中参数x的字节i被替换为字节b：
  unsigned replace_bytes(unsigned x, int i, unsigned char b);
  以下示例，说明了这个函数该如何工作：
  replace_bytes(0x12345678, 2, 0xAB) --> 0x12AB5678
  replace_bytes(0x12345678, 0, 0xAB) --> 0x123456AB
 */
int main(int argc, char const* argv[])
{
    printf("%.2x\n", replace_bytes(0x12345678, 2, 0xAB));
    printf("%.2x\n", replace_bytes(0x12345678, 0, 0xAB));
    return 0;
}
