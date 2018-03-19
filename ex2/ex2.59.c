#include <stdio.h>

typedef unsigned char *byte_pointer;

unsigned combine(unsigned a, unsigned b)
{
    return (a & 0xFF) | (b & ~0xFF);
}

int main(int argc, char const* argv[])
{
    unsigned a = 0x89ABCDEF;
    unsigned b = 0x76543210;
    printf("%.2x\n" , combine(a, b));
    return 0;
}
