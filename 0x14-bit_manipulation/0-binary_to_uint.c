#include "holberton.h"

/**
 *binary_to_uint - Function that converts a binary number to an unsigned int.
 *@b: is pointing to a string of 0 and 1 chars
 *Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count, decimal = 0;
	int pow = 1, temp;

	if (!b)
	{
		return (0);
	}
	for (count = 0; b[count] != '\0'; count++)
	{
	}
	temp = count - 1;
	for (; temp >= 0; temp--)
	{
		if (b[temp] != '1' && b[temp] != '0')
		{
			return (0);
		}
		if (b[temp] == '1')
		{
			decimal = decimal + pow;
		}
		pow = pow * 2;
	}
	return (decimal);
}
