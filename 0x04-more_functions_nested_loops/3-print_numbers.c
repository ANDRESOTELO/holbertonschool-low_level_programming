#include "holberton.h"

/**
 *print_numbers - program that print numbers from 0 to 9
 *
 *
 *
 */

void print_numbers(void)
{
int numbers;
for (numbers = '0'; numbers <= '9'; numbers++)
{
_putchar(numbers);
}
_putchar('\n');
}
