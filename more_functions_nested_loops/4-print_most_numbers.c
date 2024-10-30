#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4
 *
 * This function prints digits from 0 to 9, except for 2 and 4,
 * followed by a new line. It uses _putchar only twice in the code.
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}

	}
_putchar ('\n');
}
