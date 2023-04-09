#include "main.h"

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
 * get_bit - returns the value of a bit at a given index.
 * @n: The number
 * @index: The idnex of the bit
 * Return: The bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char bits_str[100];
	unsigned int len = 0;

	to_bit(n, bits_str);
	while (bits_str[len])
		len++;
	len--;
	if (bits_str[index] && len >= index)
		return (bits_str[len - index] - '0');
	else if (len == 0)
		return (0);
	else
		return (-1);
}
