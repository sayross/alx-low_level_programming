#include "main.h"

/**
 * _strcmp - check the code
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal, negative or postive value.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int c;

	for (i = 0; *(s1 + i) != '\0' || *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			c = *(s1 + i) - *(s2 + i);
			return (c);
		}
		else
		{
			return (0);
		}
	}
}
