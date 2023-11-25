#include "main.h"

/**
 * _strcat - check the code
 * @dest: string
 * @src: string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + 1))
		i++;

	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
