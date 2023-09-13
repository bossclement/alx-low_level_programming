#include "search_algos.h"


/**
 * linear_search - alogarithm to search a number in a list
 *		of numbers
 * @array: the list of numbers
 * @size: number of elements in the list
 * @value: the number to find in the list
 * Return: index position of the number found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, *(array + i));
		if (*(array + i) == value)
		{
			return (i);
		}
	}
	return (-1);
}


