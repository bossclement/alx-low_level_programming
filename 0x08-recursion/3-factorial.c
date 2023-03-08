#include "main.h"

/**
 * factorial - get the factorial of a given number
 * @n: the number
 * Description: gives the factorial of a number
 * Return: intiger
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
