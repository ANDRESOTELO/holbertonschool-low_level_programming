#include "variadic_functions.h"

/**
 *sum_them_all - Function that returns the sum of all its parameters.
 *@n: number of params
 *Return: 0 if n == 0. Integer if works.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;/*Iterator*/
	int sum = 0;
	int list_member;
	va_list num_l;

	if (n == 0)
	{
		return (0);
	}

	va_start(num_l, n);
	for (; i < n; i++)
	{
		list_member = va_arg(num_l, int);
		sum = sum + list_member;
	}
	va_end(num_l);

	return (sum);

}
