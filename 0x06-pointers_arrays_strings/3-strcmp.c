#include "main.h"
#include <stdio.h>

/**
 * _strcmp - my func
 * @s1: param 1
 * @s2: param 2
 * Description: Hello
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, s1_value = 0, s2_value = 0;

	while (s2[i++])
	{
		s1_value = (int) s1[i];
		s2_value = (int) s2[i];
		if (s1_value != s2_value)
			break;
	}

	if (s1_value > s2_value)
		return (15);
	else if (s1_value == s2_value)
		return (0);
	else
		return (-15);
}
