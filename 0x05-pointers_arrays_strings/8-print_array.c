#include "holberton.h"
#include <stdio.h>
/**
 *print_array - Entry point
 *@a: input pointer
 *@n: variable
 *
 */

void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
printf("%d", a[x]);

if (x + 1 < n)
{
putchar(',');
putchar(' ');
}
}
printf("\n");
}
