#include "search_algos.h"

/**
 * interpolation_search - searches for a target in a sorted integer array
 * using a specialized interpolation search technique
 * @array: pointer to the initial element of the array
 * @size: number of elements in the array
 * @value: target value to find
 *
 * Return: the first index containing `val`, or -1 if `val` is not found or
 * `arr` is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t h = sz - 1;
	size_t p;
	int *arr = array;
	size_t sz = size;
	int vl = value;

	if (!arr)
		return (-1);

	while ((arr[h] != arr[l]) && (val >= arr[l]) && (val <= arr[h]))
	{
		p = l + (((double)(h - l) / (arr[h] - arr[l]))
			    * (val - arr[l]));
		printf("Checked arr[%lu] = [%d]\n", p, arr[p]);
		if (arr[p] < val)
			l = p + 1;
		else if (val < arr[p])
			h = p - 1;
		else
			return (p);
	}
	if (val == arr[l])
	{
		printf("Checked arr[%lu] = [%d]\n", l, arr[l]);
		return (l);
	}
	p = l + (((double)(h - l) / (arr[h] - arr[l]))
		     * (val - arr[l]));
	printf("Checked arr[%lu] is not in the expected range\n", p);
	return (-1);
}

