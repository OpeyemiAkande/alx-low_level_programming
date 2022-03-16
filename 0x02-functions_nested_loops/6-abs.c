#include <stdio.h>
#include "main.h"
/**
 * _abs - Returns the absolute value of a number
 * Return: number in absolute format
 * @n: the number whose absolute value is required
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * (n));
	}
	else
	{
		return (n);
	}
	return (0);
}
