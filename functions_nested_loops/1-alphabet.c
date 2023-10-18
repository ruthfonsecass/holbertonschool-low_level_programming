#include "main.h"

/**
 * main - check the code
 * Description: 'print alphabet.'
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		print_alphabet(alphabet);
		alphabet++;
	}
	_putchar('\n');
	return (0);
}
