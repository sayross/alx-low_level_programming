#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1;
	unsigned long N1 = 1;
	unsigned long N2 = 1;
	unsigned long N11 = 1;
	unsigned long N12 = 1;
	unsigned long N21 = 1;
	unsigned long N22 = 1;
	unsigned long f1;
	unsigned long f2;
	unsigned long f;

	printf("1, 2");
	for (i = 1; i <= 96; i++)
	{
		if (f > 4294967295)
		{
			N11 = N1 / 1000000000;
			N12 = N1 % 1000000000;
			N21 = N2 / 1000000000;
			N22 = N2 % 1000000000;
			f1 = N11 + N12;
			f2 = N21 + N22;
			printf(", %lu%lu", f1, f2);
		}
		else
		{
			f = N1 + N2;
			N1 = N2;
			N2 = f;
			printf(", %lu", f);
		}
		i++;
	}
	printf("\n");
	return (0);
}
