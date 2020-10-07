#include "holberton.h"

/**
 *print_chessboard - Entry point
 *@a: entry bidimensional array
 *
 */

void print_chessboard(char (*a)[8])
{
int f;
int c;

for (f = 0; f < 8; f++)
{

for (c = 0; c < 8; c++)
{
_putchar(a[f][c]);
}
_putchar('\n');
}
}
