#include "main.h"

/**
 * swap_int - This function swaps integer variables
 *
 * @a: a pointer to a variable to be swapped
 * @b: a pointer to a variable to be swapped
 *
 * Return: This function has no return value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
