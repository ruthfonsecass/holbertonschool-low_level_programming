#include "main.h"

/**
 * puts2 - check the code
 * @str: valeur
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	for (i = str; i <= '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
