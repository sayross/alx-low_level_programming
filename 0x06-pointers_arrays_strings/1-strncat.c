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
	int i = 0;

	while (*(dest + l1) != '\0')
	{
		l1++;
	}
	while (i <= n && *(src + i) != '\0')
	{
		*(dest + l1 + i) = *(src + i);
		i++;
	}
	return (dest);
}
