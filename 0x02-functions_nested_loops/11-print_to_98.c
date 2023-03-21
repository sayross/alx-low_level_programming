#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - prints all natural numbers from n to 98
  *
  *@n : the number to start with
  *
  * Return: void
  */

void print_to_98(int n)
{
	int i = n;

	if (n < 98)
	{
		while (i < 98)
		{
			printf("%d, ", i);
			i++;
		}
		printf("%d\n", 98);
	}
	else if (n > 98)
	{
		while (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
		printf("%d\n", 98);
	}
	else
	{
		printf("%d\n", 98);
	}
}
