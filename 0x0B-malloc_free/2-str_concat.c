#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - check the code for ALX School students.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the new allocated space of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, size1 = 0, size2 = 0;
	char *t;

	if (s1 == 0)
		s1 = "\0";
	if (s2 == 0)
		s2 = "\0";
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	t = malloc((size1 + size2 + 1) * sizeof(char));
	if (t == 0)
		return (0);
	for (i = 0; i < size1; i++)
		t[i] = s1[i];
	for (i = 0; i < size2; i++)
		t[i + size1] = s2[i];
	return (t);
}
