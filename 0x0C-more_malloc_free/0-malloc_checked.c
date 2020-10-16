#include "holberton.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: size of memory
 * Return: pointer - or 98
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
