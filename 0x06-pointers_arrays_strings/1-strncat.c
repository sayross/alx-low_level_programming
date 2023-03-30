#include "main.h"

/**
  * *_strncat - concatenates two strings
  * @src: first string
  * @dest: second string
  * @n: number of src char
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int l1 = 0;
	int i;

	while (*(dest + l1) != '\0')
	{
		l1++;
	}
	for (i = l1; i < l1 + n; i++)
	{
		*(dest + i) = *(src + i - l1);
	}
	return (dest);
}
