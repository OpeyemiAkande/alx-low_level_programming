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

	printf("Size of a char: %zu bytes(s)\n", sizeof(charType));
	printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongIntType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
