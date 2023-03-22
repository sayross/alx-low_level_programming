#include <stdio.h>
/**
  * main - prints the sum of the even-valued terms
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i = 1;
	long int N1 = 1;
	long int N2 = 2;
	long int f;
	long int sum = 2;

	while (i <= 32)
	{
		f = N1 + N2;
		N1 = N2;
		N2 = f;
		if (f % 2 == 0)
		{
			sum = sum + f;
		}
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}

