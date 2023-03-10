#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * main - prints program file path
 * @agrc: number of arguments
 * @argv: arguments
 * Description: prints program name
 * Return: 0
 */

int main(int agrc, char *argv[])
{
	if (agrc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
