# include "search_algos.h"

/**
* interpolation_search - Function that searches for a value in a sorted array
* of integers using the Interpolation search algorithm
* @array:  is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: the first index where value is located or -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	unsigned int low = 0, high = size - 1;
	/* To determine the probe position */
	size_t pos = 0;
	unsigned int i = 0;
	char *output = "Value checked array";

	if (array)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));

		if (pos >= size)
			printf("%s[%ld] is out of range\n", output, pos);
		else
		{
			printf("Value checked array[%ld] = [%d]\n", pos,
			       array[pos]);

			if (array[pos] == value)
			{
				return (pos);
			}
			else
			{
				for (i = pos + 1; i < size; i++)
				{
					printf("%s[%d] = [%d]\n", output, i,
					       array[i]);
					if (array[i] == value)
						return (i);
				}
			}
		}
	}
	return (-1);
}
