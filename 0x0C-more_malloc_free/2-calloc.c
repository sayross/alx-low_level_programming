#include "main.h"
#include <stdlib.h>

/**
  * *_calloc - allocates memory for an array
  * @nmemb: number of elements
  * @size: size in bytes
  * Return: void
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; p[i] != '\0'; i++)
	{
		p[i] = 0;
	}
	return (p);
}
