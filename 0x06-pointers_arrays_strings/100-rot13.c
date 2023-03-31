#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: string
 * Return: s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char *a = "abcdefghijklmABCDEFGHIJKLM";
	char *b = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (*(s + i) == *(a + j))
			{
				*(s + i) = *(b + j);
			}
			else if (*(s + i) == *(b + j))
			{
				*(s + i) = *(a + j);
			}
		}
	}
	return (s);
}
