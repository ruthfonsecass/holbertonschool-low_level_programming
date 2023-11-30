#include "lists.h"

/**
 * dlistint_len - check the code
 * @h: pointer
 *
 * Return: number elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
