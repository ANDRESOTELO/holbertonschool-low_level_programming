# include "search_algos.h"

/**
* binary_search - unction that searches for a value in a sorted array
* of integers using the Binary search algorithm
* @array:  is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: the index where value is located or -1
*/

int binary_search(int *array, size_t size, int value)
{
	unsigned int left = 0;
	unsigned int right = size - 1;
	unsigned int mid = 0;
	unsigned int i = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			if (i != right)
			{
				printf("%d, ", array[i]);
			}
			else
				printf("%d\n", array[i]);
		}
		mid = (left + right) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
