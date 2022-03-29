#include "main.h"

/**
 * _strchr - A function that copies a block of
 * bytes of a memory loction to another location
 *
 * @s: A pointer to a memory area to be copied
 * @c: pointer to a memory location where the copied data would live
 *
 * Return: a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	int i, lenght;

	i = 0;
	lenght = 0;
	while (s[i] != '\0')
	{
		lenght++;
		i++;
	}

	for (i = 0; i < lenght; i++)
	{
		if (s[i] == c)
		{
			return ((s + i));
		}
		else if (i == lenght)
		{
			return ('\0');
		}
	}
	return (s);
}
