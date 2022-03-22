#include "main.h"
#include <stdio.h>

/**
 * print_array - a funtion that prints half of an array of integers followed by a new line
 *
 * @a: the pointer the array of integers to be printed
 * @n: number of elements to be printed
 *
 * Return: This function returns nothing
 */
void print_array(int *a, int n)
{
	int i;
	
	i = 0;
	
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
