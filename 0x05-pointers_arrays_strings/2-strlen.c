#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int l = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		l = l + 1;
		i++;
	}
	return (l);
}
