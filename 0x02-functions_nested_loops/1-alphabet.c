#include <stdio.h>

/**
 *main - Entry Point
 *Return: 0 (Success)
 */

char print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}

int main(void)
{
	char r[27] = {print_alphabet()};

	printf("%s", r);
	return (0);
}
