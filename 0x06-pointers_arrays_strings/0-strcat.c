#include "main.h"

/**
 * _strcat - concatenates two strings together
 *
 * @dest: pointer to a string on which concatenation takes place
 * @src: string to be concatenated on dest
 *
 * Return: a pointer to the resulting strings
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	
	for(i = 0; dest[i]; i++)
		;

	for (j = i, i = 0; src[i]; i++, j++)
		dest[j] = src[i];

	return (dest);
}
