#include "main.h"
#include <stdio.h>

/**
 *main - check the code
 *print_alphabet - Prints alphabets and returns nothing
 *Return: Always 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
