#include "main.h"
#include <stdio.h>

int find_power(int og_num, int number, int power, int terms);

/**
 * find_power - check the code
 * @og_num: param 1
 * @number: param 2
 * @power: param 3
 * @terms: param 4
 * Description: hello
 * Return: int
 */

int find_power(int og_num, int number, int power, int terms)
{
	if (terms >= power)
		return (number);

	if (power < 0)
		terms--;
	else
		terms++;

	return (find_power(og_num, og_num * number, power, terms));
}

/**
 * _pow_recursion - check the code
 * @x: param 1
 * @y: param 2
 * Description: hello
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	if (x == 1)
		return (1);
	return (find_power(x, x, y, 1));
}

