#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: binary number
  * Return: unsigned int
  */

unsigned int binary_to_uint(const char *b)
{
	int i;
	int l = strlen(b);
	int m = 1;
	unsigned int t;

	if (b == NULL)
	{
		return (0);
	}
	for (i = l - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		t = atoi(b[i]) * m;
		m = m * 2;

	}
	return (t);
}
