#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print the number.'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar('0' + digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
