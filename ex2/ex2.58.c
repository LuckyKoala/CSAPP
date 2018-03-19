#include <stdio.h>

short is_little_endian()
{
    int i = 1;
    char *p = (char *) &i;
    return *p;
}

int main(int argc, char const* argv[])
{
    printf("%d\n", is_little_endian());
    return 0;
}
