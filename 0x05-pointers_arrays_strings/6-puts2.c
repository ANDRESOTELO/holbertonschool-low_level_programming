#include "holberton.h"

/**
 *puts2 - prints character of a string
 *@str: input string
 *
 */

void puts2(char *str)
{
int count;

for (count = 0; str[count] != '\0'; count++)
{
if (count % 2 == 0)
_putchar(str[count]);
}
_putchar(10);
}
