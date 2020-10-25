#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*function that returns the sum of all its parameters*/
int sum_them_all(const unsigned int n, ...);

/*Function that prints numbers, followed by a new line*/
void print_numbers(const char *separator, const unsigned int n, ...);

/*Function that prints strings, followed by a new line*/
void print_strings(const char *separator, const unsigned int n, ...);

/*Function that prints anything*/
void print_all(const char * const format, ...);


#endif /*_VARIADIC_FUNCTIONS_H_*/
