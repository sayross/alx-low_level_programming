#include "main.h"
#include <stdlib.h>

/**
  * *array_range - creates an array of integers
  * @min: min value
  * @max: max value
  * Return: pointer to the array
  */

int *array_range(int min, int max)
{
	int i = 0;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (; min <= max; min++)
	{
		p[i] = min;
		i++;
	}
	return (p);
}
