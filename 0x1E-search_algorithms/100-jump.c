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
	unsigned int jump = 0;
	unsigned int i = 0;
	unsigned int anterior = 0;

	if (array)
	{
		while (jump < size && array[jump] < value)
		{
			i = jump;
			jump += sqrt(size);
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
		printf("Value found between indexes [%d] and [%d]\n", i, jump);

		for (anterior = i; anterior <= jump; anterior++)
		{
			if (anterior < size)
			{
				printf("Value checked array[%d] = [%d]\n",
				       anterior, array[anterior]);
				if (array[anterior] == value)
					return (anterior);
			}
		}
	}
	return (-1);
}
