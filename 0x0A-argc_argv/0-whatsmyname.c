#include "main.h"

/**
 * main - entry point
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
