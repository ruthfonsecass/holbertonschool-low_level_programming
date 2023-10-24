#include "main.h"

/**
 * print_rev - check the code
 * @s: variable
 * Return: void
 */
void print_rev(char *s)
{
	char i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}

