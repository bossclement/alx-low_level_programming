#include "main.h"

int _sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * _sqrt - func
 * @num: param 1
 * @root: param 2
 * Return: int
 */
int _sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns a number
 * @n: param
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, root));
}

