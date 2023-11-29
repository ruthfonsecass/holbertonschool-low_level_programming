#include "lists.h"

/**
 * list_len - check the code
 * @h: pointeur
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;

		h = h->next;
	}
	return (count);
}
