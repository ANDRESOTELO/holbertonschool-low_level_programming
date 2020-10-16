#include "holberton.h"

/**
 *string_nconcat - function that concatenates two strings.
 * @s1: Entry string
 * @s2: String
 * @n: entry data
 *
 * Return: Pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
	{
		s = malloc(sizeof(char) * (i + j + 1));
	}
	else
		s = malloc(sizeof(char) * (i + n + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (l = 0; l < j && l < n; k++, l++)
		s[k] = s2[l];
	s[k] = '\0';

	return (s);
}
