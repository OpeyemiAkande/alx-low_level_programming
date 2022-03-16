#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Returns the absolute value of a number
 * Return: number in absolute format
 * @n: the number whose absolute value is required
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;
	_putchar(r);
	return (r);
}
