#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches
 * array: array
 * size: size of array
 * cmp: pointer to the function
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0);
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
