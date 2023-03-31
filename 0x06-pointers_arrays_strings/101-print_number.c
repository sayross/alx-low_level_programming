#include "main.h"

/**
 * print_number - print an integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int i = 1000000000;

	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	if (n < 10)
	{
		_putchar(n + 48);
	}
	while (i <= 10)
	{
		if (i <= n)
		{
			_putchar(((n / i) % 10) + 48);
		}
		i = i / 10;
	}
	_putchar((n % 10) + 48);
}
