#include "main.h"
#include <stdio.h>
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

	if (width == 0 || height == 0)
	{
		return (0);
	}
	grid = malloc(sizeof(int) * width * height);
	if (grid == 0)
	{
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
