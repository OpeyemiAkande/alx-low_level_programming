#include "main.h"
#include <stdio.h>

/**
 * is_numerical - checks if is a digit
 * If is a number it returns 1 else returns 0
 */
int is_numerical(int n)
{
	return ((n >= 0) && (n <= 9));
}

/**
 * _atoi - a function that converts a string into an integer
 *
 * @s: the pointer the string that would be converted into an integer
 *
 * Return: This function returns 0 as a possible value
 */
int _atoi(char *s)
{
	unsigned int number, i;
	int sign;

	sign = 1;
	number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_numerical(s[i]))
		{
			number = (s[i] - 48) + number * 10;
			if (s[i] + 1 == ' ')
				break;
		}
		else if (s[i] == '-')
		{
			sign += -1;
		}
	}
	return (number + sign);
}
