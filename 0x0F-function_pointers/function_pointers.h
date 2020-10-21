#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

/*Putchar prototype*/
int _putchar(char c);

/*Function that prints a name.*/

void print_name(char *name, void (*f)(char *));

#endif /*_FUNCTION_POINTERS_H_*/
