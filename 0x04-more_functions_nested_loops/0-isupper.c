#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks if a character is uppercase
 * Return: 1 (uppercase) and 0 (otherwise)
 * @c: the character to be checked
 * @i: the counter variable
 */
int _isupper(int c)
{
	int i;

	for (i =65; i <= 90; i++)
	{
		if (c == i)
		{
			return (1);
		}
	
		else
		{
			return (0);
		}
	}
	return (0);
}
