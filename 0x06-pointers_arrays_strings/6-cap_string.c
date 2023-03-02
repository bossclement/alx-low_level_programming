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
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			if ((prev_c < 'a' || prev_c > 'z') || (prev_c < 'A' || prev_c > 'Z'))
			{
				prev_c = str[i];
				str[i] -= 32;
				continue;
			}
		}
		prev_c = str[i];
	}

	return (str);
}
