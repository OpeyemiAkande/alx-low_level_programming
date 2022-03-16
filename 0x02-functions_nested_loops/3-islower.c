#include <stdio.h>
#include "main.h"
/**
 * _islower - Checks if a character is in lowercase
 * c: The value to be compared
 * Return: 1 (lowercase), 2 (Otherwise)
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

