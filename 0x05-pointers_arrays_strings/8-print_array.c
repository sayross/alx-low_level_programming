#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: n elements
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i;

	printf("%d", *a);
	for (i = 1; i <= n - 1; i++)
	{
		printf(", %d", *(a + i));
	}
	printf("\n");
}
