#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character to be found
 * Return: pointer to the first occurrence or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == b)
		{
			break;
			return (s + i);
		}
		else
		{
			i++;
		}
	}
	return ('\0');
}
