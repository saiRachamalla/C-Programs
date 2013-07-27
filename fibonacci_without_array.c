/* Program: to generate Fibonacci Series(10 terms) without using array.
Fibonacci series: Any number in the series is obtained by adding the previous two numbers of the series. */

#include<stdio.h>
#include<stdlib.h>
int
main ()
{
  int a, b, c, i;
  a = 0;
  b = 1;
  c = a + b;
  printf ("%3d %3d %3d", a, b, c);

  for (i = 3; i < 10; i++)
    {
      a = b;
      b = c;
      c = a + b;
      printf (" %3d", c);
    }
  printf ("\n");
  return 0;
}
