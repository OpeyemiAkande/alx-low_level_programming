#include <stdio.h>

/**
 *main - Entry point of the program
 *Return: 0 (Successful)
 */
int main(void)
{
	int ch, alch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (alch = 'A'; alch <= 'Z'; alch++)
	{
		putchar(alch);
	}
	putchar('\n');
	return (0);
}
