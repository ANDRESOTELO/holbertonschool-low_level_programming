#include "holberton.h"
/**
 *_abs - computes the absolut value of a integer
 *
 *@a: character to  check
 *
 *Return: Succes 0
 *
 */
int _abs(int a)
{
if (a < 0)
a = a * (-1);
return (a);
}
