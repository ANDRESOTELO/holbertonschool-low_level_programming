#include "holberton.h"

/**
 *print_line - draws a straight line
 *@n: character that changes
 *Return: success 0
 */

void print_line(int n)
{
int a;
if (n > 0)
{
for (a = 0; a < n; a++)
{
_putchar('_');
}
}
_putchar('\n');
}
