/* Program to print "Hello World" without using semicolon anywhere in the code.
Generally when we use printf("") statement, we have to use a semicolon at the end. If printf is used inside an if condition, semicolon can be avoided. */

#include<stdio.h>
#include<stdlib.h>
int
main ()
{
//printf returns the length of string being printed
  if (printf (" Hello World \n"))	//prints Hello World and returns 1
    {
//do nothing
    }
  return 0;
}
