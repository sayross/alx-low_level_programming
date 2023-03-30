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

	while (*(dest + l1) != '\0')
	{
		l1++;
	}
	while (*(src + l2) != '\0')
	{
		l2++;
	}
	for (i = l1; i < l1 + l2; i++)
	{
		*(dest + i) = *(src + i - l1);
	}
	return (dest);
}
