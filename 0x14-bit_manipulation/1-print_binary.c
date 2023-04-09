#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: The number
 */
void print_binary(unsigned long int n)
{
	int i = 31, count = 0;

	for (; i >= 0; i--)
	{
		if (n & (1 << i))
		{
			_putchar('1');
			count++;
		} else if (count != 0)
			_putchar('0');
	}
	
	if (count == 0)
		_putchar('0');
}
