#include "main.h"

/**
 * _strlen_recursion - check the code
 * @s: string
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _sterlen_recursion(s + 1));
}
