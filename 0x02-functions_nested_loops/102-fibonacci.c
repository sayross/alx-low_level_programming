#include <stdio.h>
/**
  * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i = 1;
	long int N1 = 1;
	long int N2 = 2;
	long int f;

	printf("1, 2");
	for (i = 1; i <= 48; i++)
	{
		f = N1 + N2;
		N1 = N2;
		N2 = f;
		printf(", %ld", f);
	}
	printf("\n");
	return (0);
}
