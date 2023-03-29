#include "main.h"

/**
 * puts_half - check the code
 * @str: string
 * Return: Void
 */

void puts_half(char *str)
{
	int i;
	int j = 0;
	int l = 0;

	while (*(str + j) != '\0')
	{
		l = l + 1;
		j++;
	}
	if (l % 2 == 0)
	{
		for (i = l / 2; i < l; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = ((l - 1) / 2) + 1; i < l; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
