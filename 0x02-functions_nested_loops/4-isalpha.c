#include "holberton.h"
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
return (1);
}
else
if (c >=  'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
