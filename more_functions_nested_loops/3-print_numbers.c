#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line
 *
 * This function uses _putchar to print digits and a newline character.
 * It's restricted to using _putchar only twice in the code.
 */
void print_numbers(void)
{
	int i;
	char digit;

	for (i = 0; i <= 9; i++)
	{
		digit = i + '0';
		_putchar(digit);
	}
	_putchar('\n');
	return (0);
}
