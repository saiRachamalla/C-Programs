// Program to swap two numbers without using a temporary variable.

#include<stdio.h>
#include<stdlib.h>
int
main ()
{
  int a, b;
  printf ("\n Enter values of a and b: ");
  scanf ("%d %d", &a, &b);
  printf ("\n Before swapping a=%d, b=%d \n", a, b);
/*Swapping logic */
  a = a + b;
  b = a - b;
  a = a - b;
  printf ("\n After swapping a=%d b=%d \n", a, b);
  return 0;
}
