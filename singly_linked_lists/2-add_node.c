#include "lists.h"

/**
 * add_node - check the code
 * @head: pointeur
 * @str: string
 * Return: new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup_str;
	list_t *new_node;
	size_t len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	dup_str = strdup(str);

	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
