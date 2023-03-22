#include "main.h"
/**
  * print_times_table - prints the n times table, starting with 0
  *
  * @n: is the number of times table
  *
  * Return: void
  */

void print_times_table(int n)
{
	int i;
	int j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar(i * j + 48);
				}
				else if ((i * j) <= 9 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(i * j + 48);
				}
				else if ((i * j) <= 99 && (i * j) >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j) / 10 + 48);
					_putchar(((i * j) % 10) + 48);
				}
				else if ((i * j) <= 225 && (i * j) >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((i * j) / 100 + 48);
					_putchar((i * j) / 10 + 48);
					_putchar(((i * j) % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
