#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sum of all its parameters
  * @n: number of variables
  * Return: sum of all parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	var_list list;
	unsigned int i;
	int sum;

	var_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += var_arg(list, int);
	}

	var_end(list);
	return (sum);
}
