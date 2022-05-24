#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a string to uppercase
 *
 * @s: string to be converted
 *
 * Return: a pointer to the resulting string
 */
char *string_toupper(char *s)
{
	int count, i;

	for (count = 0; s[count]; count++)
		;

	for (i = 0; i < count; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}
