#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - my main
 * Description: hello
 * Return: yesss
 */

int main(void)
{
	int i;

	int j;

	for (i = 0; i < 100; i++)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(' ');
		putchar(j / 10 + '0');
		putchar(j % 10 + '0');
		if (i != 99 || j != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}