#include "lists.h"

/**
 * print_dlistint - check the code
 * @h: pointeur
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (i != '\0')
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
