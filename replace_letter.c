// Program to print 'xay' in place of every 'a' in a string.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int
main ()
{
  int i = 0;
  char str[100], x = 'x', y = 'y';
  printf
    ("\n This Program replaces every occurance of 'a' in a string by 'xay' \n");
  printf ("\n Enter the string : ");
  scanf ("%s", str);
  printf ("\n New string : ");
  while (str[i] != '\0')
    {
      if (str[i] == 'a')
	{
	  printf ("%c", x);
	  printf ("%c", str[i++]);
	  printf ("%c", y);
	}
      else
	{
	  printf ("%c", str[i++]);
	}
    }
  printf ("\n");
  return 0;
}
