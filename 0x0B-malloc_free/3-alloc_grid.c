#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *alloc_grid - function that returns a pointer to a 2D array of integers.
 * @width: Columns
 * @height: Rows
 *
 * Return: Double pointer - NULL if fails.
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}

	array = malloc(sizeof(**array) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{

			for (; i >= 0; i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}
	return (array);
}
