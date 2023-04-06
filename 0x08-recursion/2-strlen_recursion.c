#include "main.h"

/**
 * _strlen_recursion - return length of stringth
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
