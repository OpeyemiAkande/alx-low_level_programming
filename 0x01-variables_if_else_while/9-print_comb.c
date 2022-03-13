#include <stdio.h>

/**
 *main - Entry Point
 *Return: 0 (Success)
 */
int main(void)
{
	int num, num2;

	for (num = '0'; num <= '9'; num++)
	{
		for (num2 = '0'; num <= '9'; num++)
		{
			putchar(num);
			putchar(num2);
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
