#include "main.h"

/**
 * *_strstr -  locates a substring
 * @haystack: string
 * @needle: sybstring
 * Return: pointer to the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (needle[i] && (haystack[j] != 0))
	{
		if (haystack[j] == needle[i])
		{
			i++;
			j++;
			if (needle[i] == '\0')
			{
				return (haystack + j - i);
			}
		}
		else
		{
			i = 0;
			j++;
		}
	}
	return (0);
}
