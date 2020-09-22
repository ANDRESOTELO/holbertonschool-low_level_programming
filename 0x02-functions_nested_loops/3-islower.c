#include "holberton.h"
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return 1: Success
 */

int _islower(int c)
{
  for (c = 'a'; c <= 'z'; c++)
    {
      islower(c);
      _putchar('1');
    }
    for (c = 'A'; c <= 'Z')
      {
      _putchar('0');
    }
    return 1;
    }
