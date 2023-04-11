#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to the newly allocated space in memory
 */

char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *t;

	if (str == 0)
	{
		return (0);
	}
	while (*str != '\0')
	{
		size++;
	}
	t = malloc(size * sizeof(*str) + 1);
	if (t == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			t[i] = str[i];
		}
		return (t);
	}
}
