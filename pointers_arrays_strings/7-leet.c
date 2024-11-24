#include "main.h"
#include <stdio.h>
/**
 * leet - function that encodes a string into 1337
 * @str: string to convert
 * Return: pointer to the modified string
 */
char *leet(char *str)
{
	int i, j;
	char leet_char[] = "aAeEoOtTlL";
	char leet_number[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_char[j] != '\0'; j++)
		{
			if (str[i] == leet_char[j])
			{
				str[i] = leet_number[j];
				break;
			}

		}

	}
	return (str);
}
