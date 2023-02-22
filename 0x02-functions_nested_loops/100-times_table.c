#include <stdlib.h>
#include "main.h"

/**
 * times_table - main fuction
 * @n: nice
 * Description: my description
 * Return: 0
 */

void print_times_table(int n)
{
	int ref, index;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (ref = 0; ref <= n; ref++)
	{
		for (index = 0; index <= 9; index++)
		{
			int  num = index * ref;

			int first_num;

			if (num < 100)
			{
				first_num = (num - (num % 10)) / 10;
			} else
			{
				first_num = (num - (num % 100)) / 100;
			}

			if (first_num != 0)
			{
				_putchar(first_num + '0');
			}

			if (num < 100)
			{
				_putchar(num % 10 + '0');
			} else
			{
				_putchar((((num % 100) - ((num % 100) % 10)) / 10) + '0');
				_putchar(num % 10 + '0');
			}
			if (index < n)
			{
				int to_come = (index + 1) * ref;
				
				_putchar(',');
				if (to_come < 10)
				{
					_putchar(' ');
				}
				if (n > 9 && to_come < 100)
				{
					_putchar(' ');
					_putchar(' ');
				} else
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
