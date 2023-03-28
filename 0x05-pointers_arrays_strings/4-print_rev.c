#include "main.h"

/**
 * print_rev - check the code
 * @s: string
 * Return: Void
 */

void print_rev(char *s)
{
	int i;
	int l;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		l = l + 1;
	}
	while (l >= 0)
	{
		_putchar(*(s + j));
		l--;
	}
	_putchar('\n');
}
