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
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; i <= size; j++)
			{
				_putchar(35);
			}
			_putchar ('\n');
		}
	}
}
