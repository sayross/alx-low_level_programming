include "main.h"
/**
 * _islower - Entry point
 * checks for lowercase character
 * Return: 1 if true, 0 if false
 * @c : the character in ASCII code
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}
