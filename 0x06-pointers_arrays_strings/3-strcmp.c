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
int j = 0;

for (index = 0; s1[index] != '\0' && s2[index] != '\0'; index++)
{
if (s1[index] == s2[index])
{
return (j);
}
else
{
return (s1[index] - s2[index]);
}
}
return (j);
}
