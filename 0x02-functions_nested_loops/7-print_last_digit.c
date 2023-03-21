#include "main.h"
/**
  * print_last_digit - prints the last digit
  *
  * @n: the number to be checked
  *
  * Return: the value of last digit
  */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		i = -1 * (n % 10);
	}
	else
	{
	i = n % 10;
	}
	_putchar(i + 48);
	return (i);
}
