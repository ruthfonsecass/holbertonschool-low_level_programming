#include "main.h"

/**
 * _puts_recursion - check the code
 * @s: ponteur
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*(s + 1))
	{
		s++;
		_putchar(*(s));
	}
	_puts_recursion(s);
	return;

	_putchar('\n');
}
