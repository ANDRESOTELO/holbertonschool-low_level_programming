#include "holberton.h"

/**
 *
 *
 *
 */

char *_strcat(char *dest, char *src)
{
int count_src;
int count_dest;

/*This loop is to store the length of the string src*/

for (count_dest = 0; dest[count_dest] != '\0'; count_dest++)
{

}

for (count_src = 0; src[count_src] != '\0'; count_src++, count_dest++)
{
dest[count_dest] = src[count_src];
}

dest[count_dest] = '\0';

return dest;
}
