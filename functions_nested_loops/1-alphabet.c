#include "main.h"

/**
 * print_alphabet - show alphabet
 * Description: 'print alphabet.'
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
