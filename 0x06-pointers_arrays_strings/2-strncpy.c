#include "main.h"

/**
 * _strcat - my func
 * @dest: param 1
 * @src: param 2
 * Description: append string
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	unsigned int dest_len = 0;
	unsigned int append_index = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[append_index] != '\0')
	{
		dest[dest_len] = src[append_index];
		dest_len++;
		append_index++;
		if (sizeof(src) <= append_index || sizeof(dest) <= dest_len)
		{
			break;
		}
	}

	return (dest);
}

/**
 * _strncpy - my func
 * @dest: param 1
 * @src: param 2
 * @n: param 3
 * Description: append string
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	char new_src[10000];
	unsigned int count = 0;

	while (n--)
	{
		if (sizeof(new_src) > count && sizeof(src) > count)
		{
			new_src[count] = src[count];
			count++;
		} else
		{
			break;
		}
	}

	return (_strcat(dest, new_src));
}
