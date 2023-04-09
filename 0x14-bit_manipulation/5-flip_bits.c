#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *		to get from one number to another
 * @n: The number given
 * @m: The number to get
 * Return: The resulted number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	int count = 0;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
