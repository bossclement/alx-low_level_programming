#include "main.h"

/**
 * puts_half - hello
 * @str: nice
 * Return: yummy
 */

void puts_half(char *str)
{
	int length = 0;
	static int counter = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	length = (length / 2) + 1 + counter;

	while (str[length - 1] != '\0')
	{
		_putchar(str[length - 1]);
		length++;
	}
	_putchar('\n');
}
