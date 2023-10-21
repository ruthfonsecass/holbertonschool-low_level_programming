#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, r;

	for (i = 0; i < 10; i++)
	{
		for (r = 0; r <= 14; r++)
		{
			{
				if (i >= 10)
					_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
