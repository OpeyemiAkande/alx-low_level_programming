#include <stdio.h>
#include "main.h"
/**
 * times_table - Prints the times table from 0 to 9
 */
void prints_times_table(int n)
{
	int r, i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			r = (i * j);
			printf("%3d,", r);
		}
		printf("\n");
	}
}
