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
int a;
int b;

for (a = 0; haystack[a] != '\0'; a++)
{
b = 0;
while (needle[b] != '\0' && haystack[a] == needle[b])
{
a++;
b++;
}

if (a > 0)
{
a = a - b;

if (needle[b] == '\0')
{
return (haystack + a);
}
}
}
return ('\0');
}
