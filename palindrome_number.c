/*Program to check whether a number is Palindromic or not. 
If a number, which when read in both forward and backward way is same, then such a number is called a
palindrome number. Example : 121, 333, 919 */

#include<stdio.h>
#include<stdlib.h>
int
main ()
{
  int n, n1, rev = 0, rem;
  printf ("\n Enter any number: ");
  scanf ("%d", &n);
  n1 = n;
/*logic*/
  while (n > 0)
    {
      rem = n % 10;
      rev = rev * 10 + rem;
      n = n / 10;
    }
  if (n1 == rev)
    printf ("\n Given number is a palindromic number \n");
  else
    printf ("\n Given number is not a palindromic number \n");
  return 0;
}
