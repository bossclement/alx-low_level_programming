#include <stdio.h>


/**
 * append_nums - append numbers
 * @a: first number
 * @b: second number 
 * Description: append numbers
 * Return: zero
 */
int append_nums(int a, int b);


/**
 * main - my main
 * Description: hello
 * Return: yesss
 */

int main(void)
{
	int num1;

	int num2;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57, num2++)
		{
			if (append_nums(a, b) < append_nums(b, a))
			{
				putchar(num1);
				putchar(num2);
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}

/**
 * append_nums - append numbers
 * @a: first number
 * @b: second number
 *
 * Description: append numbers
 * Return: zero
 */

int append_nums(int a, int b)
{
	char stra[20];

	char strb[20];

	sprintf(stra, "%d", a);
	sprintf(strb, "%d", b);
	strcat(stra, strb);
	return (stra);
}
