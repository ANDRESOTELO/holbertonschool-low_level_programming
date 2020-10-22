#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

#include <stdlib.h>
#include <stdio.h>

/*Putchar prototype*/
int _putchar(char c);

/*Function that prints a name.*/

void print_name(char *name, void (*f)(char *));

/*Func that executes a func given as parameter on each element of an array*/
void array_iterator(int *array, size_t size, void (*action)(int));

/*function that searches for an integer*/
int int_index(int *array, int size, int (*cmp)(int));

#endif /*_FUNCTION_POINTERS_H_*/
