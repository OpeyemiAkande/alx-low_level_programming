#include "main.h"
/**
 *_strcat - concatenate two strings
 *@dest: a pointerto a character that would be changed
 *@src: a pointer to a character that would also be changed
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}