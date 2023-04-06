#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - return length of stringth
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s == '\0')
	{
		return (l);
	}
	l = _strlen_recursion(s + 1) + 1;
}
