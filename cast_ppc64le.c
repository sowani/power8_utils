/* This code demonstrates that float is signed long by default on ppc64le. */
#include <stdio.h>

int main (void)
{
  float f = 0x8000000000000000;
  signed long res1;
  unsigned long res2;

  res1 = (signed long) f;
  res2 = (unsigned long) f;

  printf ("%f, %ld, %lu, %lx\n", f, res1, res1, res1);
  printf ("%f, %ld, %lu, %lx\n", f, res2, res2, res2);
  return (0);
}
