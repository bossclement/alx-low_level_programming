#include "main.h"

/**
 * _islower - main fuction
 * Description: my description
 * @c: my argument
 * Return: 0
 */

int _islower(int c)
{
	int a;

	for (a = 65; a <= 90; a++)
	{
		if (c == a)
		{
			return (0);
		}
	}
	return (1);
}
