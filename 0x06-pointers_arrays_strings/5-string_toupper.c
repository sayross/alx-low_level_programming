#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *
 * Return: string
 */

char *string_toupper(char *);
{
	char *s;
	int i;
	int l;

	while (*(s + l) != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		if (*(s + i) <= 122 && *(s + i) >= 97)
		{
			*(s + i) = *(s + i) - 32;
		}
	}
	return (s);
}
