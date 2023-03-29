#include "main.h"

/**
 * puts_half - check the code
 * @str: string
 * Return: Void
 */

void puts_half(char *str)
{
	int i;
	int l = 0;

	while (*str != '\0')
	{
		l = l + 1;
	}
	if (l % 2 == 0)
	{
		for (i = 1; i <= l / 2; i++)
		{
			_putchar(*(str + l - i));
		}
	}
	else
	{
		for (i = 1; i <= (l - 1) / 2; i++)
		{
			_putchar(*(str + l - i));
		}
	}
	_putchar('\n');
}
