#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print number.'
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');

	return (0);
}
