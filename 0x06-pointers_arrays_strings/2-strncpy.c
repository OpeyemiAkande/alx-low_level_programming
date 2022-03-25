#include "main.h"
/**
 *_strncpy - concatenate two strings
 *@dest: a pointerto a character that would be changed
 *@src: a pointer to a character that would also be changed
 *@n: value
 *Return: dest
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
