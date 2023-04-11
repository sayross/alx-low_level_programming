#include "main.h"
#include <stdlib.h>
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
		return (0);
	}
	t = malloc(size);
	if (t == 0)
	{
		return (0);
	}
	while (size--)
	{
		t[size] = c;
	}
	return (t);
}
