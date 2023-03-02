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
		if ((int) c < 97 || (int) c > 122)
			continue;
		string[i] = (char) (c - 32);
	}

	return (string);
}
