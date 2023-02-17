#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 * Description: my description
 * Return: always zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive");
	} else if (n < 0)
	{
		printf("is negative");
	} else
	{
		printf("is zero");
	}
	return (0);
}
