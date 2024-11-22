#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string print nuber
 * @n: number passed function
 * @current_num: stock num 
 * @separator: separate
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int current_num;

	va_start(ap, n);

	while (i < n)
	{
		current_num = va_arg(ap, int);
		printf("%d", current_num);

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(ap);
}
