#include "main.h"

/**
 * print_islower - is lower
 * Description: 'return is lower.'
 * Return: int
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
