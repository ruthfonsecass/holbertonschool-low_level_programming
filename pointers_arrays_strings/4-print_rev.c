#include "main.h"

/**
 * print_rev - check the code
 * @s: variable
 * Return: void
 */
void print_rev(char *s)
{
	char taille = 0, i;

	while (s[taille])
		taille++;

	for (i = 0; i >= 0; i--)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

