#include <stdio.h>
/**
 * main - fizz buzz for numbers 1 to 100
 * Return: 0 always
 */

int main(void)
{
	int fizz;

	fizz = 1;
	while (fizz <= 100)

	{

		if (fizz % 3 == 0 && fizz % 5 == 0)
			printf("FizzBuzz");
		else if (fizz % 3 == 0)
			printf("Fizz");
		else if (fizz % 5 == 0)
			printf("Buzz");
		else
			printf("%d", fizz);
		if (fizz != 100)
			printf(" ");
		fizz++;
	}
	printf("\n");

	return (0);
}
