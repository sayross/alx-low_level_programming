#include "main.h"
/**
  * print_square - prints a square
  *
  * @size: the size of the square
  *
  * Return: void
  */

void print_square(int size)
{
	int i = 1;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n == 1)
	{
		_putchar(35);
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			j = 1;
			while (j <= n)
			{
				_putchar(35);
				j++;
			}
			_putchar ('\n');
			i++;
		}
	}
}
