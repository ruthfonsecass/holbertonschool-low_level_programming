#include "lists.h"

/**
 * add_node - check the code
 * @head: pointeur 
 * @str: string
 * Return: new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len = 0;

	while (str[le])
		len++;

	new_node = malloc(sizeof(list_l));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
