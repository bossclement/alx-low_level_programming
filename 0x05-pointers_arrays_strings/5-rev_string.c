#include "main.h"

/**
 * rev_string - hello
 * @s: nice
 * Return: yummy
 */

void rev_string(char *s)
{
	int length = 0;
	char new_string[10000]; 

	while (s[length] != '\0')
	{
		length++;
	}

	int index = 0;

	while (length > 0)
	{
		new_string[index] = s[length - 1];
		index++;
	}
	*s = *new_string;
	_putchar('\n');
}
