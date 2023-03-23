#include "main.h"
/**
  * print_line - draw a straight line
  *
  *@n: the number of _
  *
  * Return: void
  */

void print_line(int n)
{
	int i = 1;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
