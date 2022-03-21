#include "main.h"

/**
 * _strlen - a funtion that returns the lenght of a string
 *
 * @s: the pointer the string array to be counted
 * Return: This function returns the lenght of a string array
 */
int _strlen(char *s)
{
	int i, count;

	i = 0;
	count = 0;

	while (*(*s + i))
	{
		count++;
		i++;
	}
	return (count);
}
