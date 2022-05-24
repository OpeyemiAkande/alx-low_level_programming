#include "main.h"

/**
 * rot13 - a function that encodes using rot13
 *
 * @s: the string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *s)
{
	int i, count = 0;

	char first_half[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char second_half[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[count] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[count] == first_half[i])
			{
				s[count] = second_half[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
