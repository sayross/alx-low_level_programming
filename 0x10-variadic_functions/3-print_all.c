#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything.
 * @format: Type of arguments passed to the function.
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c, *s;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
		}
		i++;
		if (format[i])
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
