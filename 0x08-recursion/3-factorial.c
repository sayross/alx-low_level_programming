#include "main.h"
#include <stdio.h>

/**
 * factorial - calculate the factorial
 * @n: number
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
