#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: size of buffer
 * Return: pointer to res
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r);
{
	int l1 = 0;
	int l2 = 0;
	int l;
	int *N1;
	int *N2;
	int d = 0;

	while (n1[l1] != '\0')
	{
		l1++;
	}
	while (n2[l2] != '\0')
	{
		l2++;
	}
	if (l1 < l2)
	{
		l = l2;
	}
	else
	{
		l = l1;
	}
	if (size_r < l + 1)
	{
		return (0);
	}
	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		l1--;
		l2--;
		if (l1 >= 0)
		{
			N1 = n1[l1] - 48;
		}
		else
		{
			N1 = 0;
		}
		if (l2 >= 0)
		{
			N2 = n2[l2] - 48;
		}
		else
		{
			N2 = 0;
		}
		r[k] = (N1 + N2 + d) % 10 + 48;
		d = (N1 + N2 + d) / 10;
		k++;
	}
	if (d == 1)
	{
		r[l + 1] = 0;
		if (size_r < l + 2)
		{
			return (0);
		}
		while (l-- >= 0)
		{
			r[l + 1] = r[l];
		}
		r[0] = d + 48;
	}
	return(r)
}
