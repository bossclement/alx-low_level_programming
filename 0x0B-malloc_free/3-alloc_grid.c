#include "main.h"

/**
 * alloc_grid - function
 * @width: param 1
 * @height: param 2
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int **array = (int **)malloc(sizeof(int **) * height);
	int i, w;

	for (i = 0; i < width; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		for (w = 0; w < width; w++)
			array[i][w] = 0;
	}

	return (array);
}

