#include "main.h"

/**
 * _puts_recursion - function
 * @s: param
 * Descrption: print a string
 */

void _puts_recursion(char *s)
{
	static int index;

	_putchar(s[index]);
	index++;
	if (s[index])
		_puts_recursion(s);
	else
		_putchar('\n');
}
