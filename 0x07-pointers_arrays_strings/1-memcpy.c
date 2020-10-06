#include "holberton.h"

/**
 *_memcpy - Entry point
 *@dest: Dest
 *@src: Source
 *@n: cantidad que ingresa
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int count;
count = 0;

while (count < n)
{
dest[count] = src[count];
count++;
}
return (dest);
}
