B#include "holberton.h"
#include<ctype.h>
/**
 *_isalpha -  checks alpha character neither lower or upper
 *
 *@c: character to check
 *
 *Return: Success 1.
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
isalpha(c);
return (1);
}
else
{
if (c >=  'A' && c <= 'Z')
{
isalpha(c);
return (1);
}
else
{
return (0);
}
}
}
