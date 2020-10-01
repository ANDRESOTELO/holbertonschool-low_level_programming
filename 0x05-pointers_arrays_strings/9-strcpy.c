#include "holberton.h"
#include <stdio.h>

/**
 *_strcpy - copies the string pointed to by src to dest
 *@dest: to the buffer pointed to
 *@src: pointed source
 *Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int count;

for (count = 0; src[count] != '\0'; count++)
{
dest[count] = src[count];
}
dest[count] = '\0';
return (dest);
}
