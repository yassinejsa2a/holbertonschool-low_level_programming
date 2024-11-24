#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenate two strings
 * @dest: destination
 * @src: source
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int y;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[i] = src[y];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
