#include "main.h"

/**
 * _strcmp - compares two strings for similarity
 * 
 * @s1: one of the string to be compared
 * @s2: one of the string to be compared
 *
 * Return: negative, zero or positve number
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* This block checks only for the first occurrence of a non-matching character */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);

		i++;
	}

	/* This block compares the strings after a null-character is encountered */
	if (s1[i] > s2[i])
		return (1);
	else if (s1[i] < s2[i])
		return (-1);
	else if (s1[i] == s2[i])
		return (0);

	return (0);
}
