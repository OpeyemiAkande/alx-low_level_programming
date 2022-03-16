#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Prints the minutes of a day 
 */
void jack_bauer(void)
{
	int hr, min = 0;

	for (hr = 0; hr <= 23; hr++)
	{
		while (min < 60)
		{
			printf("%2d:%2d\n", hr, min);
			min++;
		}
		min = 0;
	}
}
