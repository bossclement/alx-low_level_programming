#include "variadic_functions.h"

/**
 * sum_them_all - function
 * @n: param
 * Return: number
 */

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
		result += va_arg(args, int);

	return (result);
}
