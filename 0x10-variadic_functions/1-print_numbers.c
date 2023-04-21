#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: The number of paramters passed to the function.
 * @separator: separator
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, n));
		if (separator !=  NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(list);
}
