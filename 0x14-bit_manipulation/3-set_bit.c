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


/**
 * to_bit - returns bits of a give number.
 * @str: The pointer to array to characters where to store bits.
 * @n: The number to change to bites.
 */
void to_bit(unsigned long int n, char *str)
{
	int bits = sizeof(n) * 8, count = 0, index = 0, i;

	for (i = bits - 1; i >= 0; i--)
	{
		if (n & (1UL << i))
		{
			str[index] = '1';
			count++;
			index++;
		} else if (count != 0)
		{
			str[index] = '0';
			index++;
		}
	}

	if (count == 0)
	{
		str[index] = '0';
		index++;
	}
	str[index] = '\0';
}

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: The number
 * @index: Index position of the bit to change
 * Return: 1 on success -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	char bits_str[100];
	unsigned int len = 0;
	unsigned int bits = sizeof(n) * 8, i;

	i = bits;
	if (bits < index)
		return (-1);

	to_bit(*n, bits_str);
	while (bits_str[len])
		len++;
	len--;
	if (bits_str[index] && len > index)
	{
		bits_str[len - index] = '1';
		*n = binary_to_uint(bits_str);
		return (1);
	} else if (len == 0)
	{
		while (bits--)
		{
			bits_str[bits] = '0';
		}
		bits_str[i - 1 - index] = '1';
		bits_str[i] = '\0';
		*n = binary_to_uint(bits_str);
		return (1);
	}
	return (-1);
}
