#include "holberton.h"

/**
 *puts_half - Entry point
 *@str: input string
 *
 */

void puts_half(char *str)
{
int count;

for (count = 0; str[count] != '\0'; count++)
{
if (count % 2 == 1)
_putchar(str[count]);
}
_putchar(10);
}
