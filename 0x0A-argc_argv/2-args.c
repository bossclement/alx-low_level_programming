#include <stdio.h>
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

	while (agrc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
