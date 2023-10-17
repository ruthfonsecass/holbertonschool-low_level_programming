#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print hexadecimal.'
 * Return: Alway 0 (Success)
 */
int main(void)
{
	char hexDigit = '0';

	while (hexDigit <= '9')
	{
		putchar(hexDigit);
		hexDigit++;
	}

	hexDigit = 'a';

	while (hexDigit <= 'f')
	{
		putchar(hexDigit);
		hexDigit++;
	}
	return (0);
}
