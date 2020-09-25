#include "holberton.h"

/**
 *more_numbers - program that print numbers from 0 to 14
 *
 *
 *
 */

void more_numbers(void)
{
int numbers;
int lines;
for (lines = 0; lines <= 9; lines++)
{
for (numbers = 0; numbers <= 14; numbers++)
{
if (numbers > 9)
{
_putchar((numbers / 10) + '0');
}
else
{
}
_putchar((numbers % 10) + '0');
}
_putchar('\n');
}
}
