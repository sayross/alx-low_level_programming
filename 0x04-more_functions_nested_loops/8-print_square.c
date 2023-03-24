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
	else
	{
		while (i <= n)
		{
			j = 1;
			while (j <= n)
			{
				_putchar('#');
				j++;
			}
			_putchar ('\n');
			i++;
		}
	}
}
