#include<stdio.h>
void
main ()
{
  int i, j, c, a = 0;
  for (i = 1; i <= 100; i++)
    {
      c = 0;
      for (j = 1; j <= 100; j++)
	{
	  if (i % j == 0)
	    {
	      c = c + 1;
	    }
	}
      if (c == 2)
	{
	  if (i % 3 == 0)
	    {
	      a = a + 1;
	      printf ("%d it is a prime number and divisible by 3\n", i);
	    }
	}
    }
  printf ("count=%d", a);
}
