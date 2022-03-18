#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Checks if a character is a digit
 * Return: 1 (uppercase) and 0 (otherwise)
 * @c: the character to be checked
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
