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
			switch (prev_c)
			{
				case ' ':
					str[i] -= 32;
					break;
				case '\t':
					str[i] -= 32;
					break;
				case '\n':
					str[i] -= 32;
					break;
				case ',':
					str[i] -= 32;
                                        break;
				case ';':
					str[i] -= 32;
					break;
				case '.':
					str[i] -= 32;
					break;
				case '!':
					str[i] -= 32;
					break;
				case '?':
					str[i] -= 32;
					break;
				case '"':
					str[i] -= 32;
					break;
				case '(':
					str[i] -= 32;
					break;
				case ')':
					str[i] -= 32;
					break;
				case '{':
					str[i] -= 32;
					break;
				case '}':
					str[i] -= 32;
					break;
			}
		}
		prev_c = str[i];
	}

	return (str);
}
