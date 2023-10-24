#include "main.h"

/**
 * swap_int - check the code
 * @a: valeur
 * @b: valeur
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
