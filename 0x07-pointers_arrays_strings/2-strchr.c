#include "holberton.h"

/**
 *_strchr - Entry point
 *@s: pointer to s
 *@c: char thar entry
 *
 *Return: *s
 */

char *_strchr(char *s, char c)
{

for (; *s != '\0'; s++)
{
if (*s == c)
{
return (s);
}
else
if (*s == '\0')
{
return ('\0');
}
}
return (0);
}
