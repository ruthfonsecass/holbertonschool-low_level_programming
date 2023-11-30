#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (i != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
