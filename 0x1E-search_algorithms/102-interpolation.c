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
	size_t pos = 0;
	char *output = "Value checked array";

	if (array)
	{
		while ((array[high] != array[low]) && (value >= array[low]) &&
		       (value <= array[high]))
		{
			pos = low + (((double)(high - low) /
				      (array[high] - array[low]))
				     * (value - array[low]));

			printf("%s[%ld] = [%d]\n", output, pos, array[pos]);
			if (array[pos] < value)
			{
				low = pos + 1;
			}
			else if (value < array[pos])
			{
				high = pos - 1;
			}
			else
				return (pos);
		}
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		if (pos >= size)
		{
			printf("%s[%ld] is out of range\n", output, pos);
			return (-1);
		}
		if (value == array[low])
		{
			return (low);
		}
		else
			return (-1);
	}
	return (-1);
}
