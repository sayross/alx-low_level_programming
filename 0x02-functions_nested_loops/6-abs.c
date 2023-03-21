#include "main.h"
/**
 * _abs - Entry point
 * computes the absolute value of an integer
 * @n : number
 * Return: n if + or 0, -n if -
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
