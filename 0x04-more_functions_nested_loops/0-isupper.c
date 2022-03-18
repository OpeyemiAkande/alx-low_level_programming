#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * Return: 1 (uppercase) and 0 (otherwise)
 * @c: the character to be checked
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
