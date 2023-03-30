#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: first string
 * @dest: second string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int l1 = 0;
	int l2 = 0;
	int i;
	int j;

	while (*(dest + l1) != '\0')
	{
		l1++;
	}
	while (*(src + l2) != '\0')
	{
		l2++;
	}
	for (i = 0; i < l1; i++)
	{
		_putchar(*(dest + i));
	}
	for (j = 0; j <= l2; j++)
	{
		_putchar(*(src + j));
	}
	return (dest);
}
