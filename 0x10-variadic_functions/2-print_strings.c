#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function
 * @separator: param 1
 * @n: param 2
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	size_t i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL && (i + 1) <= n)
			printf("%s", separator);
		str = va_arg(args, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
	}
	va_end(args);
	printf("\n");
}
