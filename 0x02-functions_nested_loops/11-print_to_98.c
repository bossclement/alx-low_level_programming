#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - main fuction
 * Description: my description
 * @n: hello
 * Return: 0
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		if (n < 98)
		{
			printf(" ,");
		}
		if (n < 98)
		{
			n++;
		} else
		{
			n--;
		}
	}
}
