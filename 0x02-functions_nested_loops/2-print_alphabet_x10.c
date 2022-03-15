
#include <stdio.h>

/**
 *main - Entry Point
 *Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	char ch;
	int i; 

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
