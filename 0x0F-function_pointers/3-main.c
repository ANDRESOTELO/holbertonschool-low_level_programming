#include "3-calc.h"

/**
 *main - this is a basic calculator
 *@argc: int number of the quantity of arguments
 *@argv: string array with the arguments
 *
 *Return: wrong 98 - wrong 99 - divides by 0 100.
 */

int main(int argc, char **argv)
{
	int num1, num2;
	char *operator;
	int (*func)(int, int);
	char check[3] = "/%";
	int calc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
/*convierto lo que pongo en la posicion 1 del argv*/
	num2 = atoi(argv[3]);
	operator = argv[2];

	if ((operator[0] == check[0] || operator[0] == check[1]) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(operator);
/*aqui estoy haciendo el llamado de la función*/

/*if wrong operator*/
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	calc = func(num1, num2);
	printf("%d\n", calc);

	return (EXIT_SUCCESS);
/*Macro de salida*/
}

