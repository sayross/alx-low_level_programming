#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int l;

	l = (sizeof(s) / sizeof(*s)) - 1;;
	return (l);
}
