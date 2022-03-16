#include <stdio.h>
#include "1-main.h"
/**
 *main - Entry Point
 *Return: 0 (Success)
 */

void print_alphabet (void)
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
	print_alphabet();
	return (0);
}
