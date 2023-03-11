#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - func
 * @argc: number of arguemnts
 * @argv: Arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, c;

	int count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);

	if (c < 0)
		printf("0\n");

	else
	{
		for (i = 0; i < 4; i++)
		{
			while (c >= coins[i])
			{
				c -= coins[i];
				count++;
			}
		}

		if (c % 2 != 0)
			count++;
		printf("%d\n", count);
	}

	return (0);
}

