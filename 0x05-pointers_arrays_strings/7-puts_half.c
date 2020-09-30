#include "holberton.h"

/**
 *puts_half - Entry point
 *@str: input string
 *
 */

void puts_half(char *str)
{
int count;
int j;
int impar;

for (count = 0; str[count] != '\0'; count++)
{
}
if (count % 2 == 0)
{
for (j = count / 2; j < count; j++)
{
_putchar(str[j]);
}
}
else
{
for (impar = (count + 1) / 2; impar < count; impar++)
_putchar(str[impar]);
}
_putchar(10);
}
