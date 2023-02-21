#include "main.h"

/**
 * jack_bauer - main fuction
 * Description: my description
 * @n: hello
 * Return: 0
 */

int jack_bauer(int n)
{
	int num1, num2;

	for (num1 = 0; num1 <= 23; num1++)
	{
		for (num2 = 0; num2 <= 59; num2++)
		{
			if (num1 < 10)
			{
				_putchar('0');
			}
			_putchar(num1 + 0);
			_putchar(':');
			if (num2 < 10)
			{
				_putchar('0');
			}
			_putchar(num2 + '0');
		}
	}
}
