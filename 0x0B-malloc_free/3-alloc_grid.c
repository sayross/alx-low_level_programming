#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	grid = malloc(sizeof(*grid) * height);
	if (width <= 0 || height <= 0 || grid == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(**grid) * width);
			if (grid[i] == 0)
			{
				while (i--)
					free(grid[i]);
				free(grid);
				return (0);
			}
			for (j = 0; j < width; j++)
				grid[i][j] = 0;
		}
		return (grid);
	}
}
