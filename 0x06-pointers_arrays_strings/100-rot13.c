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
	char *a = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == *(a + j))
			{
				*(s + i) = *(b + j);
				break;
			}
		}
	}
	return (s);
}
