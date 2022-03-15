#include <stdio.h>

/**
 *main - Entry Point
 *Return: 0 (Success)
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

int main(void)
{
	int r;
	r = _islower('H');

	if (r == 1)
	{
		printf("Character is a lowercase character\n");
	}
	else 
	{
		printf("Character is not lowercase character\n");
	}

	return (0);
}
