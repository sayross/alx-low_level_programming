#include <stdio.h>
/**
 * main - Entry point
 * Description: possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
	int m;
	int o;
	int p;

	while (n <= 57)
	{
		m = 48;
		while (m <= 57)
		{
			o = 48;
			while (o <= 57)
			{
				p = 48;
				while (p <= 57)
				{
					if ((n - 48) * 10 + m < (o - 48) * 10 + p)
					{
						putchar(n);
						putchar(m);
						putchar(' ');
						putchar(o);
						putchar(p);
						if (n + m + o + p != 227)
						{
							putchar(',');
							putchar(' ');
						}
					}
					p++;
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

