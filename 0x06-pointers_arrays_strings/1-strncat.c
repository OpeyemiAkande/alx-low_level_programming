#include "main.h"

/**
 * _strncat - concatenates two strings together using a maximum
 * of n bytes from src
 *
 * @dest: the destination string on which concatenation would be done
 * @src: the source string that would be concatenated
 * @n: the number of bytes to be concatenated from src
 *
 * Return: the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, count;

	for (count = 0; dest[count]; count++)
		;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[count] = src[i];
		count++;
	}
	return (dest);
}
