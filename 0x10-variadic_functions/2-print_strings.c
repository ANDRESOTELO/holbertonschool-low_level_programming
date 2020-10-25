#include "variadic_functions.h"

/**
 *print_strings - Function that prints strings, followed by a new line.
 *@n: number of integers passed to the function.
 *@separator: String to be printed between numbers.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;/*Iterator*/
	va_list print_str;
	const char *s;

	va_start(print_str, n);
	for (; i < n; i++)
	{
		s = va_arg(print_str, const char *);
		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		/*n-1 because n is 4 and i finish in 3*/
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print_str);
}
