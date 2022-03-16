#include <stdio.h>
#include "main.h"
/**
 * print_sign - Checks the sign of a number
 * @n: The number to be checked
 * Return: 1 (lowercase), -1 or 0 (Otherwise)
 */

int print_sign(int n)
{

	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
	return (0);
}
