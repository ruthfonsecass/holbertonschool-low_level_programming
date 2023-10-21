#include "main.h"

/**
 * print_diagonal - check the code
 * @n: is the number of times the character
 * Return: void
 */
void print_diagonal(int n)
{
	int r, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (r = 0; r < n; r++)
	{
		for (j = 0; j < r; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
