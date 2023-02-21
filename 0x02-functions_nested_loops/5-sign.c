#include "main.h"

/**
 * print_sign - main fuction
 * Description: my description
 * @n: hello
 * Return: 0
 */

int print_sign(int n)
{
	switch (n)
	{
		case n > 0:
			_putchar('+');
			return (1);
		case n == 0:
			_putchar(48);
			return (0);
		default:
			_putchar('-');
			return (-1);
	}
}
