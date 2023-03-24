#include <stdio.h>
/**
  * main - Fizz Buzz
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n;

	printf("%d", 1);
	for (n = 2; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (n % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
}
