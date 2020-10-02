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
int count_s1; /*counts the bytes of s1*/
int count_s2; /*counts the bytes of s2*/

for (count_s1 = 0; s1[count_s1] != '\0'; count_s1++)
{
for (count_s2 = 0; s2[count_s2] != '\0'; count_s2++)
{
int resta = s1[count_s1] - s2[count_s2];

if (resta < 0)
{
return (resta);
}

if (resta > 0)
{
return (resta);
}
else
{
return (0);
}
}
}
return (0);
}
