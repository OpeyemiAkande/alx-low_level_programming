#include <stdio.h>

/**
 *main - Entry Point
 *Return: 0 (Success)
 */
int main(void)
{
	int intType;
	char charType;
	float floatType;
	long int longIntType;
	long long int longLongIntType;

	printf("Size of a char: %d bytes(s)\n", sizeof(charType));
	printf("Size of an int: %d bytes(s)\n", sizeof(intType));
	printf("Size of a long int: %d bytes(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longLongIntType));
	printf("Size of a float: %d byte(s)", sizeof(floatType));
	return (0);
}
