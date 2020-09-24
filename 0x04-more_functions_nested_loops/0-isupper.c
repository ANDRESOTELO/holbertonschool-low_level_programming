B#include "holberton.h"
/**
 *_isupper - checks a uppercase character
 *@c: character to check
 *Return: Success 1
 *
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
