#include "main.h"

/**
 * free_grid - function
 * @grid: param 1
 * @height: param 2
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}

