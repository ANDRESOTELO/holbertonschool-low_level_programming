#include "holberton.h"

/**
 *reverse_array - function that reverses the content of an array of integers.
 *@a: point to array
 *@n: value of number of elements of the array
 *
 */

void reverse_array(int *a, int n)
{
int count;
int tmp;

for (count = 0; count < n / 2; count++)
{
tmp = a[count];
a[count] = a[n - count - 1];
a[n - count - 1] = tmp;
}
}
