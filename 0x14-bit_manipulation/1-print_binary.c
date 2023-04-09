#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: The number
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8, count = 0, i;

	for (i = bits - 1; i >= 0; i--)
	{
		if (n & (1UL << i))
		{
			_putchar('1');
			count++;
		} else if (count != 0)
			_putchar('0');
	}

	if (count == 0)
		_putchar('0');
}
