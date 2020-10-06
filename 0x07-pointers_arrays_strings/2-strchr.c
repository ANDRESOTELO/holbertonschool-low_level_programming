#include "holberton.h"

/**
 *_strchr - Entry point
 *@s: pointer to s
 *@c: char thar entry
 *
 *Return: *s (success), null otherwise
 */

char *_strchr(char *s, char c)
{

for (; ; s++)
{
if (*s == c)
{
return (s);
}
else if (*s == '\0')
{
return ('\0');
}
}
}
