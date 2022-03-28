#include "main.h"

/**
 * _memcpy - A function that copies a block of
 * bytes of a memory loction to another location
 *
 * @src: A pointer to a memory area to be copied
 * @dest: pointer to a memory location where the copied data would live
 * @n: the number of bytes to be filled out of the memory area
 *
 * Return: a pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
