#include "main.h"
#include <stdio.h>

/**
 * _strcopy - copies the string contained by str
 *
 * @dest: the pointer the char that would be changed
 * @src: pointer to a char that will be changed
 *
 * Return: This function returns nothing
 */
void *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
