/* Program to print "DONE" 100 times without using any loop. */

#include<stdio.h>
#include<stdlib.h>
void
main ()
{
  static int i = 100;
  printf ("%d . DONE\n", 101 - i);
  main (1 / --i);
}

// The code gives a "Floating point exception (core dumped)."
// Please provide a solution to that.
