#include "main.h"

/**
 * _puts_recursion - check the code
 * @s: ponteur
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*(s));
	if (*(s + 1))
	{
		s++;
		_puts_recursion(s);
		return;
	}
	_putchar(*s);
	_putchar('\n');
}
