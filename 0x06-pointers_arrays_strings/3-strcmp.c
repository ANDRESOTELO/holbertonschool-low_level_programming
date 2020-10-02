#include "holberton.h"

/**
 *_strcmp - function that compares two strings.
 *@s1: point to s1
 *@s2: point to s2
 *Return: 0 Success
 *
 */

int _strcmp(char *s1, char *s2)
{
int index;

for (index = 0; s1[index] != '\0' && s2[index] != '\0'; index++)
{
int resta = s1[index] - s2[index];

if (resta != 0)
{
return (resta);
}
}
return (0);
}
