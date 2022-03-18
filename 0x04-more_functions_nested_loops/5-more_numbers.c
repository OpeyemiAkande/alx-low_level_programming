#include <stdio.h>
#include "main.h"

/**
 * more_numbers - multiplies two integers
 */
void more_numbers(void)
{
	int i, num;

	for (i = 1; i <= 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
	}
}
