#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: The number
 * @index: Index position of the bit to change
 * Return: 1 on success -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
