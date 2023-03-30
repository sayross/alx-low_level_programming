#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: s
 */

char *cap_string(char *s)
{
	int i;
	int l;
	char spc[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (s[0] <= 122 && s[0] >= 97)
	{
		s[0] = s[0] - 32;
	}
	for (i = 1; *(s + i) != '\0'; i++)
	{
		for (l = 0; l < 13; l++)
		{
			if (*(s + i) == *(spc + l) && *(s + i + 1) <= 122 && *(s + i + 1) >= 97)
			{
				*(s + i + 1) = *(s + i + 1) - 32;
			}
		}
	}
	return (s);
}
