#include "main.h"
/**
  * jack_bauer - prints every minute of the day
  *
  * Return: always 0 (Success)
  */

void jack_bauer(void)
{
	int i = 0;
	int j;
	int k;
	int l;

	while (i <= 2)
	{
		j = 0;
		while (j <= 9)
		{
			if (i == 2 && j == 4)
			{
				break;
			}
			k = 0;
			while (k <= 5)
			{
				l = 0;
				while (l <= 9)
				{
					_putchar(i + 48);
					_putchar(j + 48);
					_putchar(':');
					_putchar(k + 48);
					_putchar(l + 48);
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}


