#include "main.h"

/**
 * print_to_98 - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int limite = 98;
	int i, j;

	if (n <= limite)
	{
		for (i = n; i <= limite; i++)
		{
			_putchar(i);
			if (i != limite)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');

			}
		}
	}
	else

		for (j = n; j >= limite; j--)
		{
			_putchar(j);
			if (j != limite)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
}
