// Program to swap two numbers using bitwise operator

#include<stdio.h>
#include<stdlib.h>
int
main ()
{
  int i, k;
  printf ("\n Enter two numbers : ");
  scanf ("%d %d", &i, &k);
  printf ("\n Value of i=%d k=%d before swapping", i, k);
  i = i ^ k;
  k = i ^ k;
  i = i ^ k;
  printf ("\n value of i=%d k=%d after swapping \n", i, k);
  return 0;
}
