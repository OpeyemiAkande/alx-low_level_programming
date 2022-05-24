#include "main.h"

/**
 * _strncpy - a function that copies n bytes of a string
 * @dest: destination buffer for the copied string
 * @src: source string to be copied
 * @n: number of bytes to be copied from src
 *
 * Return: the the copied string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i <= n; i++)
	{
		if (i == n)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
