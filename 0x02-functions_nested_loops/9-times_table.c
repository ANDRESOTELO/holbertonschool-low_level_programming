#include "holberton.h"
/**
 *
 *
 *
 *
 *
 */

void times_table(void)
{
  int a;
  int b;
  int c;
  for (a = 0; a <= 9; a++)
    {
      for (b = 1; b <= 9; b++)
        {
	  c = a * b;
	  _putchar(c + '0');
	  _putchar(44);
	  _putchar(32);
	  _putchar('\n');
        }
    }
}
