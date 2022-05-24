#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * 
 * @s: the string to be encoded
 *
 * Return: a pointer to the resulting string
 */
char *leet(char *s)
{
	int i, count = 0;

	int upper_case[] = {65, 69, 79, 84, 76};
	int lower_case[] = {97, 101, 111, 116, 108};
	int replacement[] = {52, 51, 48, 55, 49};
	
	while (s[count] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[count] == lower_case[i] || s[count] == upper_case[i])
				s[count] = replacement[i];
		}
		count++;
	}
	return (s);
}
