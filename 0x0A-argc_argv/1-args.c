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
	(void)argv;

	printf("%d\n", agrc - 1);
	return (0);
}
