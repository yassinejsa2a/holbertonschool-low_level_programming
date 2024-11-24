#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenate two strings
 * @dest: destination
 * @src: source
 * @n: number of byte from src
 * Return: Destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int y;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[i] = src[y];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
