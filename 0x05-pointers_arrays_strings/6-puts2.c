#include "main.h"

/**
 * puts2 - a funtion that prints every other character of
 * a string starting with the first
 *
 * @str: the pointer the string array to be printed
 * Return: This function returns nothing
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		_putschar('\n');
}
