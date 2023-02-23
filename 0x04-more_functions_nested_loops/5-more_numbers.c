#include "main.h"

/**
 * more_numbers - my function
 * Description: the description
 * Return: hello
 */

void more_numbers(void)
{
int c;

int i;

for (i = 0; i < 10; i++)
{
for (c = 0; c <= 14; c++)
{
int first_num = '\0';
int second_num = c % 10;
if (c >= 10)
{
first_num  = '1';
}
_putchar(first_num);
_putchar(second_num + '0');
}
_putchar('\n');
}
}
