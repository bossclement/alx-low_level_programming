# include "main.h"

/**
 * print_line - my func
 * Description: hello
 * @n: yo
 * Returns: number
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');

}
