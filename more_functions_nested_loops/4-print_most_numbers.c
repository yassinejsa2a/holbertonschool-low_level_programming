#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4
 *
 * This function prints digits from 0 to 9, except for 2 and 4,
 * followed by a new line. It uses _putchar only twice in the code.
 */
void print_most_numbers(void)
{
	int i;
	char digit;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != 2 && i != 4)
		{
			digit = i + '0';
			_putchar(digit);
		}
	}
	_putchar('\n');
}
