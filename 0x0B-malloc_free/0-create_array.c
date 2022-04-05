#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @c: the character to initialize with
 * @size: the size of the array
 * Return: null if size is 0
 *
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size > 0)
	{
		for (i = 0; i < (size + 1); i++)
		{
			p[i] = c;
		}
		p[size + 1] = '\0';
	}
	else if (size == 0)
		return ('\0');
	return (p);
}
