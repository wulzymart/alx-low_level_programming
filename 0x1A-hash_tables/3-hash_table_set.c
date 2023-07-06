#include "hash_tables.h"
/**
 * index_check - check if a key exists
 * @index: index to search
 * @ht: address of hash table
 * @key: key to check for at index
 * Return: node or NULL
 */
hash_node_t *index_check(const hash_table_t *ht, unsigned long index,
						 const char *key)
{
	hash_node_t *index_node; /*store the node retrived at index of ht array*/

	index_node = ht->array[index];
	while (index_node)
	{
		if (strcmp(index_node->key, key) == 0)
			return (index_node);
		index_node = index_node->next;
	}
	return (NULL);
}
/**
 * hash_table_set - adds a new key paie to the hash table
 * @ht: address of hash table
 * @key: key string
 * @value: value to be added
 * Return: 1 if success, ) if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	unsigned long index;	   /*hold index returned by hash function*/
	char *key_cpy, *value_cpy; /*To hold copy of key and value*/

	if (!ht || !key || strlen(key) == 0 || strcmp("\n", key) == 0 || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = index_check(ht, index, key);
	if (node)
	{
		free(node->value);
		node->value = strdup(value);
		return (1);
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	key_cpy = strdup(key);
	value_cpy = strdup(value);

	if (!key_cpy || !value_cpy)
	{
		if (key_cpy)
			free(key_cpy);
		free(node);
		return (0);
	}
	node->key = key_cpy;
	node->value = value_cpy;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
