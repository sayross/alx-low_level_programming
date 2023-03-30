#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: str
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == (9 || 10 || 32 || 33 || 34 || 40))
		{
			if (*(s + i + 1) <= 122 && *(s + i + 1) >= 97)
			{
				*(s + i + 1) = *(s + i + 1) - 32;
			}
		}
		else if (*(s + i) == (41 || 44 || 46 || 59 || 63 || 123 || 125))
		{
			if (*(s + i + 1) <= 122 && *(s + i + 1) >= 97)
			{
				*(s + i + 1) = *(s + i + 1) - 32;
			}
		}
	}
	return (s);
}
