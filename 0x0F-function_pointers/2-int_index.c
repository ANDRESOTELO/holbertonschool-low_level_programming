#include "function_pointers.h"

/**
 *int_index - Function that searches for an integer.
 *@array: array of numbers
 *@size: size of the array
 *@cmp: pointer to the function
 *Return: Integer success or -1 if fails.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c = 0;

	if (!array || !cmp || !size)
		return (-1);
	for (; c < size; c++)
	{
		if (cmp(array[c]))
		{
			return (c);
		}
	}
	return (-1);
}
