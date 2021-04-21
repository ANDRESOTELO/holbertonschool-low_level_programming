# include "search_algos.h"

/**
* jump_search - Function that searches for a value in a sorted array
* of integers using the Jump search algorithm
* @array:  is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: the first index where value is located or -1
*/

int jump_search(int *array, size_t size, int value)
{
	unsigned int jump = sqrt(size);
	unsigned int i = 0;
	unsigned int anterior = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] != value && array[i] < value)
		{
			i += jump;
		}
		else
		{
			anterior = i - jump;
			for (; anterior <= i; anterior++)
			{
				if (array[anterior] == value)
				{
					return (anterior);
				}
			}
		}
	}
	return (-1);
}
