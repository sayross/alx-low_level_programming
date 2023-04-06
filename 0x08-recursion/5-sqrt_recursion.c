#include "main.h"

/**
 * _sqrt_recursion - calculates natural square root of a number
 * @n: number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n * n == _sqrt_recursion(n))
	{
		return (_sqrt_recursion(n));
	}
	return (-1);
}
