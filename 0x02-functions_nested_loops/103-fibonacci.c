#include <stdio.h>

/**
 * main - main fuction
 * Description: my description
 * Return: 0
 */

int main(void)
{
	long long int i, res, old_cur;
	long long int prev = 1;
	long long int cur = 2;

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
	return (1);
}
