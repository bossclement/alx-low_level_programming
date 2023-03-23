#include "3-calc.h"

/**
 * main - function
 * @argv: string
 * @argc: number
 * Return: number
 */

int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if ((operator == (char *)"/" || operator  == (char *)"%") && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	operation = get_op_func(operator);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operation(num1, num2));
	return (0);
}
