#include "main.h"

/**
 * *_strcpy - copies the string to the buffer
 * @dest: buffer
 * @src: string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i = 0;
	int j;

	while (*(src + i) != 0)
	{
		l = l + 1;
		i++;
	}
	for (j = 0; j <= l; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
