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
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
	return (0);
}
