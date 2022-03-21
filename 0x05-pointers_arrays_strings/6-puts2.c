#include "main.h"

/**
 * _puts - a funtion that prints the value of a string
 *
 * @s: the pointer the string array to be printed
 * Return: This function returns nothing
 */
void _puts(char *s)
{
	char *t = s;

	for (; *t != '\0'; t++)
	{
		_putchar(*t);
	}
	_putchar('\n');
}
