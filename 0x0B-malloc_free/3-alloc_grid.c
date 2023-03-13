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
	int h, w;

	for (h = 0; h < height; h++)
	{
		array[h] = (int *)malloc(sizeof(int) * width);
		for (w = 0; w < width; w++)
			array[h][w] = 0;
	}

	return (array);
}

