#include <stdio.h>
#include "main.h"
/**
 * times_table - Prints the times table from 0 to 9
 */
void times_table(void)
{
	int r, i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = (i * j);
			printf("%3d,", r);
		}
		printf("\n");
	}
}
