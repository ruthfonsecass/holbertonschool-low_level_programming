#include "main.h"

/**
 * rev_string - check the code
 * @s: valeur
 * Return: void
 */
void rev_string(char *s)
{
	int i, len = 0;
	char temp;

	while (*(s + len) != '\0')
	{
		len++;
	}

	for (i = len - 1; i <  0; i--)
	{
		temp = *(s + i);
		*(s + i) = *(s + len - 1);
		*(s + len - 1) = temp;
		len--;
	}
}
