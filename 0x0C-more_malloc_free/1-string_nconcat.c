#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int str_len(char *str);
char *concat_str(char *dest, char *str, int n);

/**
 * str_len - func
 * @dest: param 1
 * @str: param 2
 * @n: param 3
 * Return: pointer
 */

char *concat_str(char *dest, char *str, int n)
{
	int dest_len = str_len(dest);
	int i;

	for (i = 0; i < n; i++)
	{
		if (str[i])
			dest[dest_len + i] = str[i];
		else
			break;
	}
	return (dest);
}

/**
 * str_len - func
 * @str: param 1
 * Return: number
 */

int str_len(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * string_nconcat - func
 * @s1: param 1
 * @s2: param 2
 * @n: param 3
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array = (char *)malloc(str_len(s1) + str_len(s2) + 1);

	if (array == NULL)
		return (NULL);

	array = concat_str(array, s1, str_len(s1));
	array = concat_str(array, s2, n);
	array[str_len(array)] = '\0';

	return (array);
}
