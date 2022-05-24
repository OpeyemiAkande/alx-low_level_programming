#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: the integer to be printed
 *
 * Return: nothing
 */
void print_number(int n)
{
	int count, d, m;

	if (n < 0)
	{
		_putchar(45);
		m = -1 * n;
	}
	else
	{
		m = n;
	}
	
	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /=10)
		_putchar(((m / count) % 10) + 48);
}
