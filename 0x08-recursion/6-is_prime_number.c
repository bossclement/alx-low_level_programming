#include "main.h"
#include <stdio.h>

/**
 * check_prime - check the code
 * @number: param 1
 * @num: param 2
 * Description: Hi
 * Return: int.
 */

int check_prime(int number, int num)
{
	if ((number % num == 0 && num < number) || num > number)
		return (0);
	else if (num == number)
		return (1);
	return (check_prime(number, ++num));
}

/**
 * is_prime_number - check the code
 * @n: param 1
 * Description: Hi
 * Return: int.
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
