#include "hash_tables.h"

/**
 * hash_table_set - adds a new key paie to the hash table
 * @ht: address of hash table
 * @key: key string
 * @value: value to be added
 * Return: 1 if success, ) if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;   /*new node*/
	unsigned long index;	   /*hold index returned by hash function*/
	char *key_cpy, *value_cpy; /*To hold copy of key and value*/

	if (!ht || !key || !strcmp("", key) || !value)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	key_cpy = strdup(key);
	value_cpy = strdup(value);

	if (!key_cpy || !value_cpy)
	{
		if (key_cpy)
			free(key_cpy);
		free(new);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	new->key = key_cpy;
	new->value = value_cpy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
