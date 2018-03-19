#include <stdio.h>

typedef unsigned char *byte_pointer;

unsigned replace_bytes(unsigned x, int i, unsigned char b)
{
    byte_pointer val = (byte_pointer) &x;
    val[i] = b;
    return x;
}

int main(int argc, char const* argv[])
{
    printf("%.2x\n", replace_bytes(0x12345678, 2, 0xAB));
    printf("%.2x\n", replace_bytes(0x12345678, 0, 0xAB));
    return 0;
}
