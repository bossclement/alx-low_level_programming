# include "main.h"

/**
 * print_square - my func
 * Description: hello
 * @size: yo
 * Returns: number
 */

void print_square(int size)
{
	int n = size;
	int times = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (times <= n / 2)
	{
		int i = 0;

		while (i <= n)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		times++;
	}
}
