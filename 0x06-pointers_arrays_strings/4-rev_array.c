#include "main.h"

/**
 * reverse_array - reverse the contents of an array
 * @a: a pointer to the array 
 * @n: the number of elements in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, c, *dup_array = a;

	for (i = 0, j = (n - 1); i < n/2; i++, j--)
	{
		c = a[j];
		a[j] = dup_array[i];
		dup_array[i] = c;
	}
}
