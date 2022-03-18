#include <stdio.h>
#include "main.h"

/**
 * print_line - Prints a straight line using underscore
 * @n: the number of times to print underscores
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
