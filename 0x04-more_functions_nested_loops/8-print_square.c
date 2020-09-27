#include "holberton.h"

/**
 *print_square - prints a square
 *
 *@size: dato que entra
 *
 *
 */

void print_square(int size)
{
int width;
int height;

if (size <= 0)
{
_putchar(10);
}
for (height = 0; height < size; height++)
{
for (width = 0; width < size; width++)
{
_putchar(35);
}
_putchar(10);
}
}
