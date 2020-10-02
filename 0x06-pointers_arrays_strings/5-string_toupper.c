#include "holberton.h"

/**
 *string_toupper - function changes lower to upper
 *@s: pointer to string
 *Return: Always 0 (Success)
 */

char *string_toupper(char *s)
{
int count;

for (count = 0; s[count] != '\0'; count++)
{
if (s[count] >= 'a' && s[count] <= 'z')
{
s[count] = s[count] - 32;
}
}
return (s);
}
