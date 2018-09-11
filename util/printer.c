#include <stdio.h>
#include "printer.h"

short is_little_endian()
{
  int i = 1;
  char *p = (char *) &i;
  return *p;
}

void show_bytes(byte_pointer start, size_t len)
{
  size_t i;
  printf("0x");
  if(is_little_endian()) {
    //Warning: if len is 0, then len-1 is Umax
    for (i = len-1; i > 0; i--)
      printf("%.2x", start[i]);
    printf("%.2x", start[0]);
  } else {
    for (i = 0; i < len; i++)
      printf("%.2x", start[i]);
  }
  printf("\n");
}

void show_int(int val)
{
  show_bytes((byte_pointer) &val, sizeof(int));
}
