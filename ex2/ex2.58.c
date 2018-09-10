#include <stdio.h>

short is_little_endian()
{
    int i = 1;
    char *p = (char *) &i;
    return *p;
}

/*
  编写过程is_little_endian，当在小端法机器上编译和运行时返回1，在大端法机器上编译运行时则返回0.这个程序应该可以运行在任何机器上，无论机器的字长是多少。
 */
int main(int argc, char const* argv[])
{
    printf("%d\n", is_little_endian());
    return 0;
}
