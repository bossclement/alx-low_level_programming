#include "main.h"

/**
 * string_toupper - func
 * @string: my string
 * Description: yes
 * Return: yes
 */

char *string_toupper(char *string)
{
	int i;
	char c;

	while (string[i++])
	{
		c = string[i];
		if (c < 'a' || c > 'z')
			continue;
		string[i] -= 32;
	}

	return (string);
}
