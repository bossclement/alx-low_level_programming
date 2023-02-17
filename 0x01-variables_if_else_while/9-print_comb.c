#include <stdio.h>

/**
 * main - my main
 * Description: hello
 * Return: yesss
 */

int main(void)
{
	int num1;

	int num2;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(num2);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
