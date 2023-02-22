#include <stdio.h>

/**
 * main - main fuction
 * Description: my description
 * Return: 0
 */

int main(void)
{
	long int i;
	long int res;
	long int old_cur;
	long int prev = 1;
	long int cur = 2;

	for (i = 1; i < 4000000; i++)
	{
		if (cur % 2 == 0)
		{
			res += cur;
		}
		old_cur = cur;
		cur += prev;
		prev = old_cur;
	}
	printf("%ld\n", res);
	return (0);
}
