#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *free_grid - Entry point
 * @grid: Grid
 * @height: Rows
 *
 * Return: NULL
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
