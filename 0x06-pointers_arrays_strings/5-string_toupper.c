#include "main.h"
/**
 *string_toupper - concatenate two strings
 *@str: string to be converted
 *
 *Return: a string of the converted words
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
