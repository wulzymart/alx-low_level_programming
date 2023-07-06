#include "hash_tables.h"

/**
 * hash_table_create -  creates a hash table
 * @size: size of hashtable
 * Return: Newly created table or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	if (!size)
		return (NULL);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->size = size;
	new->array = calloc(sizeof(hash_node_t), size);
	if (!(new->array))
	{
		free(new);
		return (NULL);
	}
	return (new);
}
