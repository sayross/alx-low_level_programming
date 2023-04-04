#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - string for any of a set of bytes
 * @s: string
 * @accept: string to be searched
 * Return: bytes in s that match one of bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
