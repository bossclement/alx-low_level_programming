#include "main.h"

/**
 * puts_half - hello
 * @str: nice
 * Return: yummy
 */

void puts_half(char *str)
{
	int length = 0;
	char n;

	while (s[length] != '\0')
	{
		length++;
	}

	n = (length - 1) / 2

	if (length % 2 != 0)
	{
		_putchar(n);
		return;
	}

	length = length / 2;

	while (length > 0)
	{
		_putchar(str[length - 1]);
		length--;
	}
	_putchar('\n');
}
