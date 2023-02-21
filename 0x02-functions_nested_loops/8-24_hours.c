#include "main.h"
#include <math.h>

/**
 * get_first_digit - hello
 * @num: yes
 * Description: yes
 * Return: 0
 */

int get_first_digit(int num)
{
	int digits = (int)log10(num);

	return (num / pow(10, digits));
}


/**
 * jack_bauer - main fuction
 * Description: my description
 * Return: 0
 */

void jack_bauer(void)
{
	char num1, num2;

	for (num1 = 0; num1 <= 23; num1++)
	{
		for (num2 = 0; num2 <= 59; num2++)
		{
			if (num1 < 10)
			{
				_putchar('0');
				_putchar(num1 + '0');
			} else
			{
				_putchar(get_first_digit(num1) + '0');
				_putchar(num1 % 10 + '0');
			}
			if (num2 < 10)
			{
				_putchar('0');
				_putchar(num2 + '0')
			} else
			{
				_putchar(get_first_digit(num2) + '0');
				_putchar(num2 % 10 + '0')
			}
			_putchar('\n');
		}
	}
}
