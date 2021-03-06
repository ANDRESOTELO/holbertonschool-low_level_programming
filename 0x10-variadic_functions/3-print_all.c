#include "variadic_functions.h"
/**
 *print_all - Function that prints anything.
 *@format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i, j;/*j string position*/
	double f;
	char *s;

	va_list list;

	va_start(list, format);
	j = 0;
	while (format && format[j])/*while format exist*/
	{
		switch (format[j])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case'i':
			i = va_arg(list, int);
			printf("%d", i);
			break;
		case 'f':/*float*/
			f = va_arg(list, double);
			printf("%f", f);
			break;
		case 's':/*string*/
			s = va_arg(list, char *);
			if (!s)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			break;
		}
		if ((format[j] == 'c' || format[j] == 'i' || format[j] == 's' ||
		     format[j] == 'f') && (format[j + 1] != '\0'))
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(list);
}
