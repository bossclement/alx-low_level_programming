#include "main.h"

/**
 * print_rev - hello
 * @s: nice
 * Return: yummy
 */

void print_rev(char *s)
{
	int length = sizeof(s) / sizeof(char);

	while (--length)
	{
		_putchar(str[length - 1]);
	}
	_putchar('\n');
}
