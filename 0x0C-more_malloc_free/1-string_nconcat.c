#include "main.h"
#include <stdio.h>
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
	unsigned int l1 = 0, l2 = 0, i;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[l1] != '\0')
	{
		l1++;
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	if (n < l2)
	{
		l2 = n;
	}
	s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (i = l1; i < l1 + l2; i++)
	{
		s[i] = s2[i - l1];
	}
	s[i] = '\0';
	return (s);
}
