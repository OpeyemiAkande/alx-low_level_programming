#include "main.h"

/**
 * main - entry point
 * @argc: the number of arguments passed
 * @argv: an array of strings
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = argc - argc; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
	return (0);
}
