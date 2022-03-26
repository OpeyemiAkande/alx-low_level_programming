#include "main.h"
/**
 *_strcmp - compare two strings
 *@str1: a pointer to a string that would be compared
 *@str2: a pointer to a string that would be compared
 *
 *Return: integer value
 */

int _strcmp(char *str1, char *str2)
{
	int i;

	i = 0;

	for (i = 0; ; i++)
	{
		if (str1[i] > str2[i])
		{
			return (1);
		}
		else if (str1[i] < str2[i])
		{
			return (-1);
		}
	}

	if (str1[i] == str2[i])
	{
		return (0);
	}
	else if (str1[i] > str2[i])
	{
		return (1);
	}
	else if (str1[i] < str2[i])
	{
		return (-1);
	}
}
