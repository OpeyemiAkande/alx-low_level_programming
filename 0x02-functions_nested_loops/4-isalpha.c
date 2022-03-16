#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Checks if a character is in uppercase
 * @c: The value to be compared
 * Return: 1 (lowercase), 0 (Otherwise)
 */

int _isalpha(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
