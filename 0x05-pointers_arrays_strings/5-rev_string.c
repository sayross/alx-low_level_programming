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
	char *r = s[0];
	
	*r = *s;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		l = l + 1;
	}
	while (j < l)
	{
		*(s + j) = *(r + l - j - 1);
		j++;
	}
}
