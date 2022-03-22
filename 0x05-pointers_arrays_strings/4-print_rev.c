#include "main.h"

/**
 * print_rev - a funtion that prints the value of a string in reverse order
 *
 * @s: the pointer the string array to be printed
 * Return: This function returns nothing
 */
void print_rev(char *s)
{
	int  i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i = (i - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
