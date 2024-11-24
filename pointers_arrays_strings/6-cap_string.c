#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalize all words
 * @str: source string
 * Return: destination
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;
	char *separator = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (capitalize && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			capitalize = 0;
		}
		else
		{
			int j = 0;

			while (separator[j] != '\0')
			{
				if (str[i] == separator[j])
				{
					capitalize = 1;
					break;
				}
				j++;
			}
			if (separator[j] == '\0')
			{
				capitalize = 0;
			}
		}
		i++;
	}

	return (str);
}
