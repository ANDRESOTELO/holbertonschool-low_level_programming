#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to get his natural square root.
 *
 * Return: -1.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}


/**
 * _sqrt - calculates the natural square root of a number.
 * @n: number to get his natural square root
 * @i: number to see if it is the sqr root of n.
 *
 * Return: -1.
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
