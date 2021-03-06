#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - Function that returns a pointer to a newly
 *@str: size of array
 *Return: A pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *dest;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[i] != '\0' ; i++)
	{
	}
	dest = malloc(sizeof(*dest) * i + 1);

	if (dest == NULL)
	{
		return (NULL);
	}
	for (; j <= i ; j++)
	{
		dest[j] = str[j];
	}
	return (dest);
}
