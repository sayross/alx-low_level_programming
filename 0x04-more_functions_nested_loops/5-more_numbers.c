#include "main.h"
/**
  * more_numbers - prints 10 times the numbers, from 0 to 14
  *
  * Return: void
  */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar(j / 10);
			}
			_putchar(j % 10);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
