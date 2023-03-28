#include "main.h"

/**
 * print_rev - check the code
 * @s: string
 * Return: Void
 */

void print_rev(char *s)
{
	int i;
	int j;
	int l;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		l = l + 1;
	}
	j = l
	while (j >= 0)
	{
		_putchar(*(s + j));
		j--;
	}
}
