#include "main.h"

/**
 * _strbrk - A function that compares a prefix of  a string of
 * bytes of a memory loction to another string
 *
 * @s: A pointer to a memory area to be copied
 * @accept: pointer to a memory location where the string to be compared
 *
 * Return: a pointer to the memory area s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, lenght;

	i = 0;
	lenght = sizeof(*s) / sizeof(char);

	for (i = 0; i < lenght; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			else if (i == lenght && accept[j] == '\0')
			{
				return ('\0');
			}
		}
	}
	return (s);
}
