#include "main.h"
/**
 * free_grid - allocates a grid, makes space and frees space
 * @grid: takes in the width of the grid
 * @height: height of the grid
 * Return: returns the free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
