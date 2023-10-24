#include "main.h"

/**
 * print_rev - check the code
 * @s: variable
 * Return: void
 */
void print_rev(char *s)
{
	char i;

	for(i = 0; i >= 0; i--) 
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

