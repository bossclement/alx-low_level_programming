#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function
 * @separator: param 1
 * @n: param 2
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	size_t i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL && (i + 1) <= n)
			printf("%s", separator);
		printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
