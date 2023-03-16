#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - func
 * @b: param
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
