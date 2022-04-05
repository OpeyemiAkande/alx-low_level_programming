#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that copies string to a new memory
 * @str: the str to be copied
 * Return: null if size is 0
 *
 */
char *_strdup(char *str)
{
	char *p;
	int i, len;

	len = sizeof(*str) / sizeof(char);
	p = (char *)malloc(len * sizeof(char));
	if (str != NULL)
	{
		for (i = 0; i <= len; i++)
		{
			p[i] = str[i];
		}
		return (p);
	}
	else
	{
		return ('\0');
	}
}
