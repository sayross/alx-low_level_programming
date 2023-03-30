#include "main.h"

/**
 * reverse_array - reverses the content of an array of integer
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int r;

	while (i < n)
	{
		r = a[i];
		a[i] = a[n - i];
		a[n - i];
		i++;
		n--;
	}
}
