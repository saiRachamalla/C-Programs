//nothing
//deletethis
/* Program to concatenate two strings without using strcat() function.
strcat(str ing1,strin g2) is a C standard function declared in the header file string.h
The strcat() function concatenates string2, string1 and returns string1. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *strct (char *c1, char *c2);
char *
strct (char *c1, char *c2)
{
//strlen function returns length of argument string
  int i = strlen (c1);
  int k = 0;
// loops until null is encountered and appends string c2 to c1
  while (c2[k] != '\0')
    {
      c1[i + k] = c2[k];
      k++;
    }
  return c1;
}

int
main ()
{
  char string1[15], string2[15];
  char *finalstr;
  printf ("\n Enter a String [length<15] : ");
  scanf ("%s", string1);
  printf ("\n Enter another String [length<15] : ");
  scanf ("%s", string2);
  printf ("\n Before concatenation:"
	  "\n string1 = %s \n string2 = %s", string1, string2);
// addresses of string1, string2 are passed to strct()
  finalstr = strcat (string1, string2);
  printf ("\n After concatenation:");
//prints the contents of string whose address is in finalstr
  printf ("\n finalstr = %s", finalstr);
//prints the contents of string1
  printf ("\n string1 = %s", string1);
//prints the contents of string2
  printf ("\n string2 = %s", string2);
  printf ("\n");
  return 0;
}
