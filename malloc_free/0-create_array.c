#include "main.h"

/**
 * create_array - prints buffer in hexa
 * @c:character
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (size == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return(arr);
}
