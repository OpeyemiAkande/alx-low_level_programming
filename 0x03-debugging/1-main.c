#include <stdio.h>

/**
 * main - causes an infiite loop
 *
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/*
	 * while (i < 10)
	 * {
	 * Infinite loop no increase of variable
	 * putchar(i);
	 * }
	 */

	printf("Infinite loop avoided! \\O/\n");
	return (0);
}
