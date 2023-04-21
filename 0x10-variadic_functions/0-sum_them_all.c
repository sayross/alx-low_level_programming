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

	if (n == 0)
	{
		return (0);
	}
	var_start(list, n);
	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += var_arg(list, int);
	}

	var_end(list);
	return (sum);
}
