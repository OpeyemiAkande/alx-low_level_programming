#include "main.h"

/**
 * print_my_name - prints the name of the program
 */
void print_my_name(char** argv)
{
	int i;
	
	for (i = 0; argv[0][i] == '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
}

/**
 * main - entry point
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	print_my_name(argv);
	return (0);
}
