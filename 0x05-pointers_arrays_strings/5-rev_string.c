#include "main.h"

/**
 * print_rev - a funtion that prints the value of a string in reverse order
 *
 * @s: the pointer the string array to be printed
 * Return: This function returns nothing
 */
void rev_string(char *s)
{
	int count, i, j, k = 0;
	char t, *u = s;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
		count = i;
	}

	for (j = (count - 1); j >= 0; j--)
	{
		t = *(s + j);
		_putchar(t);
		*(u + k) = t;
		k++;
	}
	_putchar('\n');
}
