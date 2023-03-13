#include "main.h"

/**
 * create_array - function
 * @size: param 1
 * @c: param 2
 * Return: a pointer or Null
 */

char *create_array(unsigned int size, char c)
{
	char *arrayP = (char *)malloc(size);
	unsigned int i;

	if (size == 0 || arrayP == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arrayP[i] = c;
	return (arrayP);
}

