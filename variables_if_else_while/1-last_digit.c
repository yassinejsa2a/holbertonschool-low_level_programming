#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main is good-tmp
 *
 * Return 0
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

int main (void)
{
	last_digit();
	return (0);
}
