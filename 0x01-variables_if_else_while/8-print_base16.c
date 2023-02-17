#include <stdio.h>

/**
 * main - my main
 * Description: hello
 * Return: yesss
 */

int main(void)
{
	char n[] = "0123456789abcdef";

	int count;

	for (count = 0; n <= 16; n++)
	{
		putchar(n[count]);
	}
	putchar('\n');
	return (0);
}
