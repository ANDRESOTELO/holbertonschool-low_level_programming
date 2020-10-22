#include "3-calc.h"

/**
 *get_op_func - finds the correct function to perform the operation
 *@s: string with the operator
 *Return: A pointer to the asked function.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},/*estructuras que van a op_t*/
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)/*Same that (!ops[i].op)*/
	{

		if ((ops[i].op)[0] == s[0] && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (ops[i].f);
}
