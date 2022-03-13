#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - Entry point
 *Return: 0 (Success)
 */
int main(void)
{
	int n;
	unsigned int lastDigit;
	char nchar[20];
	

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/*if (n < 0) 
	{
		lastDigit = -(n % 10);
	}
	else 
	{
		lastDigit = n % 10;
	}*/

	lastDigit = n % 10;

	printf("The last digit of  %d is \n", lastDigit);
	printf("The number is %d\n", n);

	if ((lastDigit > 5))
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{		
		printf("The last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else if ((lastDigit > 0) && (lastDigit < 6))
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}
