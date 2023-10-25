#include "main.h"

/**
 * rev_string - check the code
 * @s: valeur
 * Return: void
 */
void rev_string(char *s)
{
	char mot[]
		int i, aux, fim, tam = s;
	fim = tam - 1;
	for (i = 0; i < tam; i++)
	{
		aux = s[i];
		s[i] = s[fim];
		s[fim] = aux;
		fim--;
	}
}
