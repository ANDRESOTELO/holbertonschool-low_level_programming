#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
 * struct argum_s - Struct of arguments
 * @spc: letter of argument.
 * @func: The function associated.
 */

typedef struct args_s /*structure of arguments and function*/
{

	char spc;/*Format specifiers*/
	int (*func)();/*function to pointer*/
} args_t;


/*Function that produces output according to a format*/
int _printf(const char *format, ...);

/*Function that prints char*/
int print_char(va_list c);

/*Function that prints string*/
int print_str(va_list s);

/*Function that prints percent sign*/
int print_per(void);


#endif /*_HOLBERTON_H_*/
