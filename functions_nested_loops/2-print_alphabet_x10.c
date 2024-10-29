#include "stdio.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase,
 *                      each followed by a new line
 */
void print_alphabet_x10(void)
{
	char letter;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
		putchar('\n');
	}
}
