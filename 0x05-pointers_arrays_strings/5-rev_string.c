#include "main.h"

/**
 * rev_string - hello
 * @s: nice
 * Return: yummy
 */

void rev_string(char *s)
{
	int index = 0;
	int length = 0;
	char new_string[10000];

	while (s[length] != '\0')
	{
		length++;
	}

	while (length > 0)
	{
		new_string[index] = s[length - 1];
		index++;
		length--;
	}
	*s = *new_string;
	_putchar('\n');
}
