#include <stdio.h>
#include "main.h"

/**
 * more_numbers - multiplies two integers
 */
void more_numbers(void)
{
	int i, first_number, second_number, result;

	i = 0;
	result = 0;
	while (i < 10)
	{
		if (result <= 14)
		{
			if (result < 10)
			{
				second_number = result;
			}
			else
			{
				first_number = result / 10;
				second_number = result % 10;
				_putchar(first_number + '0');
			}
			_putchar(second_number + 'O');
			result++
		}
		i++
		result = 0;
		_putchar('\n');
	}
}	
