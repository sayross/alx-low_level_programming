#include "main.h"
/**
  * print_diagonal - draws a diagonal line
  *
  * @n: the number of \
  *
  * Return: void
  */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(92);
		for (i = 2; i <= n; i++)
		{
			_putchar('\n');
			for (j = 1; j <= i - 1; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
		}
		_putchar('\n');
	}
}
