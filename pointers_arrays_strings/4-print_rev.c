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

	for (i = taille; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

