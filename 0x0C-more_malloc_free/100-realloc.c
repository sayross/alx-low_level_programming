#include "main.h"
#include <stdlib.h>

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
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
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
	if (new_size > old_size)
	{
		old_size = new_size;
	}
	memcpy(p, ptr, new_size);
	free(ptr);
	return (p);
}
