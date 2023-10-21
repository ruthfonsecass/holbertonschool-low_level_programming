#include "main.h"

/**
 * print_triangle - check the code
 * @n: is the number of times the character
 * Return: void
 */
void print_triangle(int n)
{
	int r, j, k;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (r = 0; r < n; r++)
	{
		for (j = 0; j < n - r - 1; j++)
			_putchar(' ');
		for (k = 0; k <= r; k++)
			_putchar('#');
		_putchar('\n');
	}
}

