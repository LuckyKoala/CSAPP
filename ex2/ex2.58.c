#include <stdio.h>
#include <stdint.h>

short is_little_endian()
{
    uint32_t val = 0x12345678;
    char *byte_array = (char *) &val;
    if(byte_array[0] == 0x78) return 1;
    return 0;
}

int main(int argc, char const* argv[])
{
    printf("%d\n", is_little_endian());
    return 0;
}
