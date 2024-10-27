#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *last_digit - Generates a random number and prints its last digit
 *
 * Return: Always 0 (Success)
 */

int last_digit(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;

	printf("Last digit of %d is %d and is ", n, digit);

	if (digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (digit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	last_digit();
	return (0);
}
