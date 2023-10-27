#include "main.h"
/**
 * main - check the code
 * @dest: valeur
 * @src: valeur
 * Return: dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + 1))
		i++;

	while ((*(dest + 1) = *(src + j)))
	{
		i++;
		j++;
	}

	return (dest);
}
