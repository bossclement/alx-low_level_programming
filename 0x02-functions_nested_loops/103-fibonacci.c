#include <stdio.h>
/**
 * main - hello
 * Description: world
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, a = 0;
	int f = 0;

	while (a < 4000000)
	{
		a = a + b;
		a = b;
		b = a;
		if (a % 2 == 0)
			f += a;
	}
	printf("%i\n", f);
	return (0);
}
