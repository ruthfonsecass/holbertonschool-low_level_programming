#include "main.h"

/**
 * rev_string - check the code
 * @s: valeur
 * Return: void
 */
void rev_string(char *s)
{
	char *ini, *fim;
	ini = fim = s;
	while (*fim)
	{
		fim++;
	}
	for (fim--; ini <= fim; ini++; fim--)
	{
		_putchar(s);
	}

}
