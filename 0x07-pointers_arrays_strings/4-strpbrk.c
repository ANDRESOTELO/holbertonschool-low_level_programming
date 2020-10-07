#include "holberton.h"

/**
 * *_strpbrk - Entry point
 * @s: string
 * @accept: second string
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

 for (i = 0 ; s[i] != '\0' ; s++)
   {
     for (j = 0 ; accept[j] != '\0' ; j++)
       {
	 if (s[i] == accept[j])
	   {
	     return (s);
	   }
	 else if (s[i] == '\0')
	   {
	     return ('\0');
	   }
       }
   }
 return ('\0');
}
