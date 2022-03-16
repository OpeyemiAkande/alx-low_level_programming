#include <stdio.h>
#include "main.h"
/**
 * islower - Checks if a character is in lowercase
 */

int _islower(int c)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

