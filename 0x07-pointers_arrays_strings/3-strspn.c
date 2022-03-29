#include "main.h"

/**
 * _strspn - A function that compares a prefix of  a string of
 * bytes of a memory loction to another string
 *
 * @s: A pointer to a memory area to be copied
 * @accept: pointer to a memory location where the string to be compared 
 *
 * Return: a pointer to the memory area s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n_bytes;
	int i, j, lenght;

	i = 0;
	lenght = 0;
	n_bytes = 0;
	while (accept[i] != '\0')
	{
		lenght++;
		i++;
	}

	for (i = 0; i < lenght; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				n_bytes++;
			}
		}
	}
	return (n_bytes * sizeof(char));
}
