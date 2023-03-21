#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
	int m;

	while (n <= 57)
	{
		m = 48;
		while (m <= 57)
		{
			if (n != m && n < m)
			{
				putchar(n);
				putchar(m);
				if ((n + m) != 113)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
