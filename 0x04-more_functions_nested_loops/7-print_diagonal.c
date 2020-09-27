#include "holberton.h"

/**
 *print_diagonal - prints diagonal line
 *
 *@n: dato que ingresa
 *
 *Return : Success
 */

void print_diagonal(int n)
{
int lines;
int columns;

if (n <= 0)
{
_putchar(10);
}
for (lines = 0; lines < n; lines++)
{
for (columns = 0; columns < lines; columns++)
{
_putchar(32);
}
_putchar(92);
_putchar(10);
}
}
