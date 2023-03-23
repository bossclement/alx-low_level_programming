#include "3-calc.h"

/**
 * get_op_func - function that returns pointer to another function
 * @s: string
 * Return: pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;


	while (ops[i].op != NULL && *(ops[i].op) != s[0])
		i++;

	return (ops[i].f);
}
