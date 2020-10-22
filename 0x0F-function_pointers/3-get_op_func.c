#include "3-calc.h"

/**
 *get_op_func - finds the correct function to perform the operation
 *@s: string with the operator
 *Return: A pointer to the asked function
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
		/*op[0] compara primera posc string "+" con la 1ra psc del string*/
/*que entra teniendo en cuenta q son strings y tienen un crter nulo*/
		if ((ops[i].op)[0] == s[0] && s[1] == NULL)
/*compara si el string que entra corresponde a algo que esta en la funcion*/
		{
			return (ops[i].f);
/*me devuelve lo que esta en el campo f de la estructura que estoy llamando*/
		}
		i++;
	}
	return (ops[i].f);
	/*este retorno se da si *s no coincidio con ningun operador*/
/* y entra al NULL, lo cual equivale a que retorna un NULL*/
}
