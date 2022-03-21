#include "main.h"

/**
 * print_rev - a funtion that prints the value of a string in reverse order
 *
 * @s: the pointer the string array to be printed
 * Return: This function returns nothing
 */
void print_rev(char *s)
{
	int i;
	char *t = s;
	char str_[1000];

	i = 0;
	for (; *t != '\0'; t++)
	{
		str_[i] = *t;
		i++;
	}

	for (; i >= 0; i--)
	{
		_putchar(str_[i]);
	}

	_putchar('\n');
}
