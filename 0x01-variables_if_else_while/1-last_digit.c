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
	int sum, lDigit;
	char nchar[20];

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lDigit = n % 10;

	if ((lDigit > 5))
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, lDigit);
	}
	else if (lDigit == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, lDigit);
	}
	else if ((lDigit > 0) && (lDigit < 6))
	{
		printf("The last digit of %d is %d and is less than 6 andnot 0\n", n, lDigit);
	}
	return (0);
}
