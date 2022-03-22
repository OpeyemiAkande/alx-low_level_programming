#include "main.h"

/**
 * puts_half - a funtion that prints half of a string followed by a new line
 *
 * @str: the pointer the string array to be printed
 * Return: This function returns nothing
 */
void puts_half(char *str)
{
	int i, last;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	last = (i + 2) / 2;

	for (i = last; str[i]; i++)
	{
		_putchar(str[i]);
	}

	putchar('\n');
}
