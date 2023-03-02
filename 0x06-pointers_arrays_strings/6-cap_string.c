#include "main.h"

/**
 * cap_string - func
 * @str: string
 * Description: hello
 * Return: code
 */

char *cap_string(char *str)
{
	int i;
	char prev_c;

	while (str[i++])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (prev_c == ' ' || prev_c == '\t' || prev_c == '\n'))
		{
			prev_c = str[i];
			str[i] -= 32;
			continue;
		}
		prev_c = str[i];
	}

	return (str);
}
