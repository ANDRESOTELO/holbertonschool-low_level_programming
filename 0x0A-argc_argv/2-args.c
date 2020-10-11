#include <stdio.h>

/**
 *main - Entry point
 *@argc: Argument count
 *@argv: Argument value
 *Return: Success Always 0
 *
 */

int main(int argc, char *argv[])
{
	int i;/*Varaible that counts in string*/

	for (i = 0; i < argc; i++)/*Counter for string*/
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
