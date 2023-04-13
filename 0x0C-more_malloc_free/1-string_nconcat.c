#include "main.h"
#include <stdlib.h>

/**
  * *string_nconcat - function that concatenates two strings
  * @s1: string 1
  * @s2: string 2
  * @n: unsigned int
  * Return: pointer to string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l1, l2, i;
	char *s;

	for (l1 = 0; *s1 != '\0'; l1++)
		;
	for (l2 = 0; *s2 != '\0'; l2++)
		;
	if (n <= l2)
	{
		l2 = n;
	}
	s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == 0)
	{
		return (0);
	}
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (; i < l1 + l2; i++)
	{
		s[i] = s2[i - l1];
	}
	s[l1 + l2 + 1] = '\0';
	return (s);
}
