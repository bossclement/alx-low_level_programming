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

	if (size == 0 || arrayP == '\0')
		return ('\0');
	arrayP[0] = c;
	return (arrayP);
}

