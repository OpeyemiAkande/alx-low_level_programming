#include "main.h"

/**
 * print_rev - a funtion that prints the value of a string in reverse order
 *
 * @s: the pointer the string array to be printed
 * Return: This function returns nothing
 */
void print_rev(char *s)
{
	int count, i, j;

	i = 0;

	if (s[i])
	{
		while (s[i] != '\0')
		{
			i++;
			count = i;
		}

		for (j = (count - 1); j >= 0; j--)
		{
			_putchar(s[j]);
		}
	}
	else
	{
		_putchar('\0');
	}
	_putchar('\n');
}
