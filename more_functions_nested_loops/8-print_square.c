#include "main.h"

/**
 * print_square - check the code
 * @size: is the size of the square
 * Return: void
 */
void print_square(int size)
{
	int r, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (r = 0; r < size; r++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');

		_putchar('\n');
	}
}
