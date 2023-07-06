#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value from an hash tble using a key
 * @key: key of value to get
 * @ht: address of hash table
 * Return: value of key if found else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;	 /*store index of key*/
	hash_node_t *index_node; /*store the node retrived at index of ht array*/

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	fflush(stdin);
	index_node = ht->array[index];
	while (index_node)
	{
		if (strcmp(index_node->key, key) == 0)
			return (index_node->value);
		index_node = index_node->next;
	}
	return (NULL);
}
