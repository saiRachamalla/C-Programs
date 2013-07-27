#include<stdio.h>
/* Temp cenversion from Fahrenheight to Celcius from 20 to 300 */
int
main ()
{
  float cel, fahr;
  printf ("Fahrenheight \t Celcius\n");
  for (fahr = 0; fahr <= 300; (fahr += 20))
    {
      cel = (5.0 / 9.0) * (fahr - 32.0);
      printf ("%6.1f \t %14.1f \n", fahr, cel);
    }
  return 0;
}
