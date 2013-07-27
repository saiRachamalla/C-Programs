#include<stdio.h>
#include<stdlib.h>
void
main ()
{
  int *a, i, x, n, index;
  printf ("\n Enter the lenth of array ::  ");
  scanf ("%d", &n);
  a = (int *) malloc (n * sizeof (int));
  printf ("\n Enter the values in array in an Ascending Order ");
  for (i = 1; i <= n; i++)
    {
      printf ("\n Enter Value :  ");
      scanf ("%d", &a[i]);
    }
  printf ("\n Enter the number to be searched :  ");
  scanf ("%d", &x);
  printf ("\n ~~Binary Search Result~~");
  index = binary (a, x, 1, n);
  if (index == -1)
    printf ("\n *Data Not Found !!* \n");
  else
    printf ("\n *Data found at %d position* \n", index);
}

int
binary (int *a, int x, int low, int high)
{
  int f = 0, mid;
  mid = (low + high) / 2;
  while (low <= high && a[mid] != x)
    {
      f++;
      mid = (low + high) / 2;
      if (x < a[mid])
	{
	  high = mid - 1;
	}
      else
	{
	  low = mid + 1;
	}
    }
  printf ("\n Number of Comparisons = %d", f);
  if (x == a[mid])
    return mid;
  else
    return -1;
}
