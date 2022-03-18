#include <stdio.h>
#include "main.h"

/**
 * more_numbers - multiplies two integers
 */
void more_numbers(void)
{
	int j, num;

	num = '0';
	for (j = 1; j <= 10; j++)
	{
		if (num == '0')
		{
			for (; num <= '9'; num++)
			{
				_putchar(num);
			}
			if (num > '9')
			{
				num = '0';
				for (num = '0'; num <= '4'; num++)
				{
					_putchar('1');
					_putchar(num);
				}
			}
		}
		_putchar('\n');
		num = '0';
	}
}
