#include "main.h"
/**
  * print_sign - Entry point
  * prints the sign of a number
  * @n : sign of a number
  * Return: 1 if +, -1 if -, 0 if 0
  */
int print_sign(int n)
{
	if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else
	{
		-putchar('0');
	}
}
