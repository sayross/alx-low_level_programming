#include "main.h"

int square(int x, int y);

/**
 * _sqrt_recursion - calculates natural square root of a number
 * @n: number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - calculates the square
 * @x: number
 * @y: square root
 * Return: y
 */

int square(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	if (y * y < x)
	{
		return (square(x, y + 1));
	}
	else
	{
		return (-1);
}
