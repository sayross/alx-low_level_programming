#include "main.h"
/**
  * times_table - prints the 9 times table, starting with 0
  *
  * Return: void
  */

void times_table(void)
{
	int i = 0;
	int j;
	int p;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			p = i * j;
			if (p <= 9)
			{
				_putchar(p + 48);
				_putchar(' ');
			}
			else
			{
				_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
}

