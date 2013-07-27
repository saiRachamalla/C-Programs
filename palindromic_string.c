/* Program to check whether the given string is a palindrome .
A Palindrome String is a string, which when read in both forward and backward way is same.
Example: radar, madam, pop, lol; */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int
main ()
{
  char string1[20];
  int i, length;
  int flag = 0;
  printf ("\n Enter a string: ");
  scanf ("%s", string1);
  length = strlen (string1);

  if (((length / 2)) % 2 != 0)
    {
      for (i = 0; i < length; i++)
	{
	  if (string1[i] != string1[length - i - 1] && i != (length / 2) + 1)
	    {
	      flag = 1;
	      break;
	    }
	}
    }
  else
    {
      for (i = 0; i < length; i++)
	{
	  if (string1[i] != string1[length - i - 1])
	    {
	      flag = 1;
	      break;
	    }
	}
    }
  if (flag == 1)
    printf ("%s is not a palindrome \n", string1);
  else
    printf ("%s is a palindrome \n", string1);
  return 0;
}
