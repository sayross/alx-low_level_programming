#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free grid
 * @grid: 2 dimensional grid
 * @height: height of the grif
 * Return: Nothing
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
