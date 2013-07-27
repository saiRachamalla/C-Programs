/* Program to print a semicolon without using a semicolon anywhere in the code.
Generally when use printf("") statement we have to use semicolon at the end.
If we want to print a semicolon, we use the statement: printf(";" );
In above statement, we are using two semicolons .
The task of printing a semicolon without using semicolon anywhere in the code can be accomplished by using the ASCII value of ';' which is equal to 59. Accordingly any character can be printed by using it's ASCII value */

#include<stdio.h>
#include<stdlib.h>
int
main (void)
{
//prints the character with ascii value 59, i.e., semicolon
  if (printf ("%c\n", 59))
    {
//prints semicolon
    }
  return 0;
}
