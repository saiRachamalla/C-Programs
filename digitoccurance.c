/* This program counts the number of occurance of a digit enter by user within a specific range [which is also entered by user] */

#include<stdio.h>
#include<stdlib.h>
int
main ()
{
  int i, j, U, L, count = 0, r = 1, n;
  printf
    ("\n This program counts the number of occurance of a digit within a specific range \n");
  printf ("\n Enter the number you want to count : ");
  scanf ("%d", &n);
  printf ("\n Enter the lower limit : ");
  scanf ("%d", &L);
  printf ("\n Enter the upper limit : ");
  scanf ("%d", &U);

  for (i = L; i <= U; i++)
    {
      j = i;
      while (j)
	{
	  r = j % 10;
	  if (r == n)
	    count++;

	  j = j / 10;
	}
    }
  if (n == 0 && L == 0)
    count++;
  printf ("\n Total Number of %d between %d and %d = %d \n", n, L, U, count);
  return 0;
}
