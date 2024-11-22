#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string print nuber
 * @n: number passed function
 * @separator: separate
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);

	while (i < n)
	{
		printf("%d", va_arg(ap, int));

		if (separator && i < n - 1)
		{
			printf("%s", separator);

			i++;
		}

	}
	printf("\n");
	va_end(ap);
}
