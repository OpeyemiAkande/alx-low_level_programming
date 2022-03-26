#include "main.h"
/**
 *_strcmp - compare two strings
 *@str1: a pointerto a string that would be compared
 *@str2: a pointer to a string that would also be compared
 *
 *Return: integer values
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
