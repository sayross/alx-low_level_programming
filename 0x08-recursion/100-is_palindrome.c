#include "main.h"

int check(char *s, int l, int r);
int length(char *s);

/**
 * is_palindrome - check if string is palindrome
 * @s: string
 * Return: 1 if true 0 otherwise
 */

int is_palindrome(char *s)
{
	if (length(s) == 0 || length(s) == 1)
	{
		return (1);
	}
	return (check(s, 0, length(s) - 1));
}

/**
  * check -  palindrome
  * @s: string
  * @l: left
  * @r: right
  * Return: 0 or 1
  */

int check(char *s, int l, int r)
{
	if (l >= r)
	{
		return (1);
	}
	else if (s[l] == s[r])
	{
		return (check(s, l + 1, r - 1));
	}
	else if (s[l] == ' ')
	{
		return (check(s, l + 1, r));
	}
	else if (s[r] == ' ')
	{
		return (check(s, l, r - 1));
	}
	else
	{
		return (0);
	}
}

/**
  * length - l of string
  * @s: string
  * Return: lenght
  */

int length(char *s)
{
	if (*s != '\0')
	{
		return (length(s + 1) + 1);
	}
}
