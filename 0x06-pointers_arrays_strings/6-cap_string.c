#include "holberton.h"

/**
 *cap_string - capitalize first letter for each word
 *@s: string que entra
 *
 *Return: Always 0 (success)
 *
 */

char *cap_string(char *s)
{
int count;

for (count = 1; s[count] != '\0'; count++)
{
if (s[count] >= 'a' && s[count] <= 'z')
{
if  ((s[count - 1] == ' ') ||
(s[count - 1] == '\t') ||
(s[count - 1] == '\n') ||
(s[count - 1] == ',') ||
(s[count - 1] == ';') ||
(s[count - 1] == '.') ||
(s[count - 1] == '!') ||
(s[count - 1] == '?') ||
(s[count - 1] == '"') ||
(s[count - 1] == '(') ||
(s[count - 1] == ')') ||
(s[count - 1] == '{') ||
(s[count - 1] == '}'))
{
s[count] = s[count] - 32;
}
}
}
if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] = s[0] - 32;
}
return (s);
}
