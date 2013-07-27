// Program to print the triangle of letters in increasing order of lines.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int
main ()
{
  int i, j, k;
  char ch;
  printf ("\n Enter the number of lines to make the triangle : ");
  scanf ("%d", &i);
  for (j = 1; j <= i; j++)
    {
      ch = 65;
      for (k = 1; k <= j; k++)
	{
	  printf ("%c", ch++);
	}
      printf ("\n");
    }
  return 0;
}
