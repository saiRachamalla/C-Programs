/* Program to compare two strings without using strcmp() function.
strcmp() function compares two strings lexicograp hically.
strcmp is declared in stdio.h
Case 1: when the strings are equal, it returns zero.
Case 2: when the strings are unequal, it returns the difference between ascii values of the characters that differ.
a) When string1 is greater than string2, it returns positive value.
b) When string1 is lesser than string2, it returns negative value.
Syntax:
int strcmp (const char *s1, const char *s2); */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmpstr (char s1[10], char s2[10]);
int
main ()
{
  char str1[10], str2[10];
  int x;
  printf ("\n Enter a string [length<10] : ");
  scanf ("%s", str1);
  printf ("\n Enter another string [length<10] : ");
  scanf ("%s", str2);
  x = cmpstr (str1, str2);
  if (x == 0)
    printf ("\n Both the Strings are equal! \n");
  else
    printf ("\n The Strings are not equal! \n");
  return 0;
}

// s1, s2 are strings to be compared
int
cmpstr (char s1[10], char s2[10])
{
//strlen function returns the length of argument string passed
  int i = strlen (s1);
  int k = strlen (s2);
  int bigger;
  if (i < k)
    bigger = k;
  else
    bigger = i;
//loops 'bigger' times
  for (i = 0; i < bigger; i++)
    {
// if ascii values of characters s1[i], s2[i] are equal do nothing
      if (s1[i] == s2[i])
	{
//Do nothing
	}
//else return the ascii difference
      else
	{
	  return (s1[i] - s2[i]);
	  break;
	}
    }
//return 0 when both strings are same
//This statement is executed only when both strings are equal
  return (0);
}
