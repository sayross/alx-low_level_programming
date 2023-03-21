#include <stdio.h>
/**
 * main - Entry point
 * Desription: combination of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
	int m;
	int o;

	while (n <= 57)
	{
		m = 48;
		while (m <= 57)
		{
			o = 48;
			while (o <= 57)
			{
				if (n < m && m < o)
				{
					putchar(n);
					putchar(m);
					putchar(o);
					if (n + m + o != 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
				o++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
