#include "function_pointers.h"

/**
 *print_name - Function that prints a name.
 *@name: name of the person
 *@f: point to function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name)
	{
		return;
	}
	if (!f)
	{
		return;
	}

	f(name);
}
