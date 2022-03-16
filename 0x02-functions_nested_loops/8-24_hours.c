#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Prints the minutes of a day 
 */
void jack_bauer(void)
{
	int hr, min = 60;

	for (hr = 0; hr <= 23; hr++)
	{
		while (min < 60)
		{
			printf("%02d:%02d", hr, min);
			min++;
		}
		min = 0;
	}
}
