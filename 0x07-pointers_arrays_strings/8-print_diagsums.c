#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: square matrix
 * @size: size of a
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 = d1 + a[i];
		d2 = d2 + a[size - i - 1];
		a = a + size;
	}
	printf("%d, %d\n", d1, d2);
}
