#include<stdio.h>
#include<stdlib.h>
void
main ()
{
  int *a, i, x, n, index = 0;
  printf ("\n Enter the lenth of array ::  ");
  scanf ("%d", &n);
  a = (int *) malloc (n * sizeof (int));
  printf ("\n Enter the values in array");
  for (i = 0; i < n; ++i)
    {
      printf ("\n Enter Value :  ");
      scanf ("%d", &a[i]);
    }
  printf ("\n Enter the number to be searched :  ");
  scanf ("%d", &x);
  printf ("\n ~~Linear Search Result~~");
  index = linear (a, n, x);
  if (index == 0)
    printf ("\n *Data Not Found !!* \n");
  else
    printf ("\n *Data found at %d position* \n", (index + 1));
}

int
linear (int *a, int n, int x)
{
  int i, index = 0, f = 0;
  for (i = 0; i < n; i++)
    {
      f++;
      if (a[i] == x)
	{
	  index = i;
	  break;
	}
    }
  printf ("\n Number of Comparisons = %d", f);
  return index;
}
