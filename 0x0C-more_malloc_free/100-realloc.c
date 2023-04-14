#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * *_realloc - reallocates a memory block using malloc and free
  * @ptr: previous memory
  * @old_size: old size
  * @new_size: new size
  * Return: new memory
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	memcpy(p, ptr, new_size);
	free(ptr);
	return (p);
}
