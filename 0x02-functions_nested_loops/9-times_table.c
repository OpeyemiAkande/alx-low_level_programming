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
			if (j != 9)
			{
				printf("%3d,", r);
			}
			else
			{
				printf("%3d\n", r);
			}
		}
		printf("\n");
	}
}
