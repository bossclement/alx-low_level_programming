#include "main.h"
#include <stdlib.h>

/**
 * _pow - Caculates the power
 * @a: The base
 * @exponent: The exponent
 * Return: The result of power
 */
unsigned int _pow(unsigned int a, int exponent)
{
	unsigned int result = 1;

	if (a == 0)
		return (0);
	else if (exponent == 0)
		return (1);

	while (exponent > 0)
	{
		result *= a;
		exponent--;
	}

	return (result);
}

/**
 * binary_to_uint - converts binary to base 10
 * @b: The pointer to character of binary data
 * Return: 0 if conversion was a failure
 *	the number in base 10 if conversion was a success.
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, index = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	while (len)
	{
		if (b[len - 1] == '1')
			result += _pow(2, index);
		len--;
		index++;
	}

	return (result);
}
