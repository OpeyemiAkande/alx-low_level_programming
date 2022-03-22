#include "main.h"

/**
 * rev_string - a funtion that prints the value of a string in reverse order
 *
 * @s: the pointer the string array to be printed
 * Return: This function returns nothing
 */
void rev_string(char *s)
{
	int count, i, length = 0;
	char *start_c, *end_c, c;

	for (i = 0; s[i]; i++)
	{
		length++;
	}

	count = length;

	start_c = s;
	end_c = s;

	for (i = 0; i < count - 1; i++)
	{
		end_c++;
	}

	for (i = 0; i < count / 2; i++)
	{
		c = *end_c;
		*end_c = *start_c;
		*start_c = c;

		start_c++;
		end_c--;
	}
}
