#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: string
 * Return: 1337
 */

char *leet(char *s)
{

	int i;
	int j;
	char c[] = {a, A, e, E, o, O, t, T, l, L};
	char n[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(s + i) == c[j])
			{
				*(s + i) = n[j];
			}
		}
	}
	return (s);
}
