#include "search_algos.h"

/**
 * interpolation_search - searches for a target in a sorted integer arrayay
 * using a specialized interpolation search technique
 * @array: pointer to the initial element of the arrayay
 * @size: number of elements in the arrayay
 * @value: target valueue to find
 *
 * Return: the first index containing `value`, or -1 if `value` is not found or
 * `array` is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t h = size - 1;
	size_t p;

	if (!array)
		return (-1);

	while ((array[h] != array[l]) && (value >= array[l]) && (value <= array[h]))
	{
		p = l + (((double)(h - l) / (array[h] - array[l]))
			    * (value - array[l]));
		printf("Checked array[%lu] = [%d]\n", p, array[p]);
		if (array[p] < value)
			l = p + 1;
		else if (value < array[p])
			h = p - 1;
		else
			return (p);
	}
	if (value == array[l])
	{
		printf("Checked array[%lu] = [%d]\n", l, array[l]);
		return (l);
	}
	p = l + (((double)(h - l) / (array[h] - array[l]))
		     * (value - array[l]));
	printf("Checked array[%lu] is not in the expected range\n", p);
	return (-1);
}

