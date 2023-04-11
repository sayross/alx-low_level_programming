#include "main.h"

/**
 * *create_array - creates an array of chars
 * @size: the size
 * @c: specific char
 * Return: Null or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *t;

	if (size == 0)
	{
		return (NULL);
	}
	t = malloc(size);
	if (t == NULL)
	{
		return (NULL);
	}
	while (size--)
	{
		t[size] = c;
	}
	return (t);
}
