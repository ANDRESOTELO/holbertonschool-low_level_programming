#include "holberton.h"
/**
 *_isupper - checks a uppercase character
 *
 *Returns: Success 1
 *Returns: Otherwise 0
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
