#include "main.h"

/**
 * _strlen - a funtion that returns the lenght of a string
 *
 * @s: the pointer the string array to be counted
 * Return: This function returns the lenght of a string array
 */
int _strlen(char *s)
{
	int count;
	char *t = s;

	count = 0;

	for (; *t != '\0'; t++)
	{
		count++;
	}
	return (count);
}
