#include "main.h"
#include <stdio.h>

/**
 * get_len - function
 * @str: param 1
 * Return: number
 */

int get_len(char *str)
{
	int length = 0;

	while (str[length])
		length++;
	return (length);
}


/**
 * str_concat - function
 * @s1: param 1
 * @s2: param 2
 * Return: a pointer
 */

char *concat(char *str, char *dest)
{
	int i;

	for (i = 0; i < get_len(str); i++)
	{
		dest[get_len(dest)] = str[i];
	}

	return (dest);
}

/**
 * str_concat - function
 * @s1: param 1
 * @s2: param 2
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *arrayP = (char *)malloc(get_len(s1) + get_len(s2));

	if (arrayP == NULL)
		return (NULL);
	arrayP = concat(s1, arrayP);
	arrayP = concat(s2, arrayP);
	arrayP[get_len(arrayP)] = '\0';

	return (arrayP);
}

