#include "holberton.h"

/**
 *print_char - Print Character
 *@c: char to print
 *Return: Success 1
 */

int print_char(va_list c)
{
	char a = va_arg(c, int);

	write(1, &a, 1);
	return (1);
}


/**
 *print_str - Print string
 *@s: string to print
 *Return: bytes that prints
 */


int print_str(va_list s)
{
	char *str = va_arg(s, char *);
	int len = 0;

	if (!str)
		str = "(null)";
	for (; str[len] != '\0'; len++)
	{
		write(1, &str[len], 1);
	}
	return (len);
}


/**
 *print_per - Print percent sign
 *Return: Success 1
 */

int print_per(void)
{
	write(1, "%", 1);
	return (1);
}
