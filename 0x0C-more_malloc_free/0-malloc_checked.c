#include "main.h"
#include <stdlib.h>

/**
  * *malloc_checked - allocates memory
  * @b: insigned int
  * Return: void
  */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(sizeof(char) * b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
