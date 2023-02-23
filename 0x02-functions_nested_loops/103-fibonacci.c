#include <stdio.h>

/**
 * main - main fuction
 * Description: my description
 * Return: 0
 */

int main(void)
{
	int prev = 1;
	int cur = 2;
	int old_cur;

	for (cur = 1; cur < 4000000; cur++)
	{
		old_cur = cur;
		if (prev % 2 == 0)
		{
			cur += prev;
		}
		prev = old_cur;
	}
	printf("%ld\n", res);
	return (0);
}
