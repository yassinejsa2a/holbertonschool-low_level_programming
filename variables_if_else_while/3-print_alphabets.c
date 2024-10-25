#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
		if (letter > 'z')
		{
			letter = 'A';
			while (letter <= 'Z')
			{
				putchar(letter);
				letter++;
			}
			putchar('\n');
		}
	}

	return (0);
}
