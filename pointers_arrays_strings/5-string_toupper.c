#include "main.h"
#include <stdio.h>
/**
 * string_toupper - change lower to upper
 * @str: string to change
 * Return: str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

	}
	return (str);
}
