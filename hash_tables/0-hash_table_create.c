#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hashtable empty
 * @size: size of the array in the hashtable
 * Return: new hashtable or null if fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;

	hashtable = malloc(sizeof(hash_table_t));

	if (hashtable == NULL)
	{
		return (NULL);
	}

	hashtable->size = size;

	hashtable->array = malloc(sizeof(hash_node_t *) * size);

	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}

	return (hashtable);
}
