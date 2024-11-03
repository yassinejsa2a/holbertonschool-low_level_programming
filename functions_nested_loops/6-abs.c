#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @n: the integer
 * Return: n always positiv integer
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
