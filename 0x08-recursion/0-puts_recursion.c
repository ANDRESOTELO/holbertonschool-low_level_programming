#include "holberton.h"

/**
 *_puts_recursion - Entry point
 *@s: Point to string
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
}
