#include "main.h"

/**
 * _memset - A function that sets the first n
 * bytes of a memory loction to some value
 *
 * @s: A pointer to a memory area
 * @b: a constant byte that should be filled in the memory area
 * @n: the number of bytes to be filled out of the memory area
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
