#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; i++)
        printf("%.2x", start[i]);
    printf("\n");
}

void show_short(short val)
{
    show_bytes((byte_pointer) &val, sizeof(short));
}

void show_long(long val)
{
    show_bytes((byte_pointer) &val, sizeof(long));
}

void show_double(double val)
{
    show_bytes((byte_pointer) &val, sizeof(double));
}

/*
  编写程序show_short, show_long和show_double，它们分别打印类型为short, long和double的C语言对象的字节表示。请试着在几种机器上运行。
 */
int main(void)
{
    int val = 0x87654321;
    byte_pointer valp = (byte_pointer) &val;
    show_bytes(valp, sizeof(int));
    return 0;
}
