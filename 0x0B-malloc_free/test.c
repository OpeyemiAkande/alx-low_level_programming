#include <stdio.h>

int main()
{
	char s[] = "I love my life";
	int len;

	len = sizeof(s)/sizeof(char);
	printf("The lenght is %d\n", len);
	return (0);
}
