#include "holberton.h"

/**
 *_strstr - Entry point - function that locates a substring.
 *@haystack: String where search
 *@needle: String to search in haystack
 *
 *Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
int i;
int j = 0, cont = 0;

for (i = 0; haystack[i]; i++)
{
for (j = 0; needle[j]; j++)
{
if (haystack[i] == needle[j])
break;
}
for (; i < j; i++)
{
if (haystack[i] == needle[j])
{
cont++;
j++;
}
}
if (j == cont)
return (haystack + i);
}
return ('\0');
}
