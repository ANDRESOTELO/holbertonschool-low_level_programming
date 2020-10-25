#include "variadic_functions.h"

/**
 *print_numbers - Function that prints numbers, followed by a new line.
 *@n: number of integers passed to the function.
 *@separator: String to be printed between numbers.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;/*Iterator*/
	int member_value;
	va_list print_nums;

	va_start(print_nums, n);
	for (; i < n; i++)
	{
		member_value = va_arg(print_nums, int);
		printf("%d", member_value);
/*n-1 because n is 4 and i finish in 3*/
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print_nums);
}
