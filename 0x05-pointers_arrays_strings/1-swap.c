#include "holberton.h"

/**
 *swap_int - intercambia los valores de dos variables
 *
 *@a: pointer to a
 *@b: pointer to b
 *
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
