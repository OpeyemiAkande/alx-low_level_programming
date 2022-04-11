#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	ptr = (char *)malloc(i * sizeof(char));
	if (ptr == NULL)
	{
		eturn NULL;
	}

	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	return ptr;
}
