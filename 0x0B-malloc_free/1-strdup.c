#include "main.h"

/**
 * _strdup - function
 * @str: param 1
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *arrayP;
	unsigned int i, length;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length])
		length++;

	arrayP = (char *)malloc(length + 1);

	if (arrayP == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		arrayP[i] = str[i];
	arrayP[i++] = '\0';
	return (arrayP);
}

