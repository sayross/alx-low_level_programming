#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: Void
 */

void rev_string(char *s)
{
	int i;
	int j = 0;
	int l = 0;
	char *r;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		l = l + 1;
	}
	for (i = 0; i < l; i++)
	{
		*(r + i) = *(s + i);
	}
	while (j < l)
	{
		*(s + j) = *(r + l - j - 1);
		j++;
	}
}