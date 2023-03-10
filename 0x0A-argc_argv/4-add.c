#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * is_num - checks a number
 * @c: number
 * Description: checks if c is a number
 * Return: integer
 */

int is_num(char *c)
{
	char i, pas;

	while (*c)
	{
		pas = 0;
		for (i = '0'; i <= '9'; i++)
		{
			if (i == c[0])
			{
				pas = 1;
				break;
			}
		}

		if (pas == 0)
			return (0);
		c++;
	}

	return (1);
}

/**
 * main - prints program file path
 * @agrc: number of arguments
 * @argv: arguments
 * Description: prints program name
 * Return: 0
 */

int main(int agrc, char *argv[])
{
	int result = 0;

	if (agrc < 2)
	{
		printf("0\n");
		return (0);
	}

	while (--agrc)
	{
		if (is_num(argv[agrc]) != 1)
		{
			printf("Error\n");
			return (1);
		}

		result += atoi(argv[agrc]);
	}

	printf("%d\n", result);
	return (0);
}

