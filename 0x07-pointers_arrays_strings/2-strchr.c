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

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == b)
		{
			break;
			return (s + i);
		}
	}
	return ('\0');
}
