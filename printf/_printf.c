#include "holberton.h"

/**
 *_printf - Function that produces output according to a format
 *@format: Character string
 *Return: 
 */

int _printf(const char *format, ...)
{
	args_t options[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_per},
		{'\0', NULL}
	};

	unsigned int i = 0; /*format iterator*/
	unsigned int j = 0; /*struct iterator*/
	unsigned int bytes = 0; /*number of bytes*/
	va_list param_list;

	if (format && format[0])
	{
		va_start(param_list, format);
		for (; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				i++;
				for (; options[j].spc; j++)
				{
					if (format[i] == options[j].spc)
					{
						bytes = bytes + options[j].func(param_list);
						break;
					}
				}
				if (options[j].spc == '\0')
					return(-1);/*If an output error is encountered, a neg value returned man printf*/
			}
			else
			{
				write(1, &format[i], 1);
				bytes++;
			}
		}
		va_end(param_list);
		return(bytes);/*Printf returns the numbers of bytes that prints*/
	}
	return(-1);		
}
