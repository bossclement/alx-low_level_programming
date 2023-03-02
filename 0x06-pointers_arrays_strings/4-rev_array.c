#include "main.h"
#include <stdio.h>

/**
 * reverse_array - func
 * @a: param 1
 * @n: param 2
 * Description: nice
 * Return: pointer
 */

void reverse_array(int *a, int n)
{
	int new_array[10000];
	int counter = 0;

	while (--n)
	{
		new_array[counter] = a[n];
		counter++;
	}

	for (n = 0; n <= counter; n++)
	{
		a[n] = *(new_array + n);
	}
}
