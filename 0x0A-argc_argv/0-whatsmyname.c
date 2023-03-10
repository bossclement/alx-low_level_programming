#include "main.h"

/**
 * main - prints program file path
 * @agrc: number of arguments
 * @argv: arguments
 * Description: prints program name
 * Return: 0
 */

int main(int agrc, char *argv[])
{
	int i = 0;

	(void)agrc;

	while (argv[0][i])
	{
		_putchar(argv[0][i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
