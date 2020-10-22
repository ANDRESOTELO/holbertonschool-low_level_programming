#include "function_pointers.h"

/**
 *array_iterator - Function executes a function given as a parameter
 *@array: array of numbers
 *@size: size of the array
 *@action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c = 0;

	if (!array)
		return;
	if (!action)
		return;
	for (; c < size; c++)
	{
		action(array[c]);
	}
}
