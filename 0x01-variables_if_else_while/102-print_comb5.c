#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - my main
 * Description: hello
 * Return: yesss
 */

int main(void)
{
	int first1, first2, second1, second2;

	for (first1 = 48; first1 <= 57; first1++)
	{
		for (first2 = 48; first2 <= 57; first2++)
		{
			for (second1 = 48; second1 <= 57; second1++)
			{
				for (second2 = 48; second2 <= 57; second2++)
				{
					if (first1 + first2 != second1 + second2)
					{
						putchar(first1);
						putchar(first2);
						putchar(' ');
						putchar(second1);
						putchar(second2);
						if (first1 != 57 || first2 != 56 || second1 != 57 || second2 != 57)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}	
		}
	}

	return (0);
}
