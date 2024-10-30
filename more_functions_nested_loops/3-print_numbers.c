#include "main.h"
#include <unistd.h>

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line
 *
 * This function uses _putchar to print digits and a newline character.
 * It's restricted to using _putchar only twice in the code.
 */
void print_numbers(void)
{
	char num;

	for (num = 0; num <= 9; num++)
	{
		write(1, &num, 1);
	}
	write(1, "\n", 1);
}
