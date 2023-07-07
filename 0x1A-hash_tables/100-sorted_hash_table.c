#include "hash_tables.h"
/**
 * shash_table_create -  creates a hash table
 * @size: size of hashtable
 * Return: Newly created table or NULL if failed
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;
	unsigned long int i;

	new = malloc(sizeof(shash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = malloc(sizeof(shash_node_t *) * size);
	new->shead = new->stail = NULL;
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	return (new);
}
/**
 * index_check - check if a key exists
 * @index: index to search
 * @ht: address of hash table
 * @key: key to check for at index
 * Return: node or NULL
 */
shash_node_t *index_check(const shash_table_t *ht, unsigned long index,
						  const char *key)
{
	shash_node_t *node; /*store the node retrived at index of ht array*/

	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node);
		node = node->next;
	}
	return (NULL);
}
/**
 * sorted_add_node - add node to a sorted dlist
 * @ht: pointer to sorted hash table
 * @node: node to add
 */
void sorted_add_node(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *current;

	if (!ht->shead)
	{
		ht->shead = node;
		ht->stail = node;
		return;
	}
	if (strcmp(ht->shead->key, node->key) > 0)
	{
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
		return;
	}
	current = ht->shead;
	while (current)
	{
		if (strcmp(current->key, node->key) > 0)
		{
			node->snext = current;
			node->sprev = current->sprev;
			node->sprev->snext = node;
			current->sprev = node;
			return;
		}
		current = current->snext;
	}
	ht->stail->snext = node;
	node->sprev = ht->stail;
	ht->stail = node;
}
/**
 * shash_table_set - adds a new key paie to the sorted hash table
 * @ht: address of hash table
 * @key: key string
 * @value: value to be added
 * Return: 1 if success, ) if failed
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node = NULL;
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
	node = malloc(sizeof(shash_node_t));
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
	node->snext = node->sprev = NULL;
	ht->array[index] = node;
	sorted_add_node(ht, node);
	return (1);
}
/**
 * shash_table_get - retrieves a value from an hash tble using a key
 * @key: key of value to get
 * @ht: address of hash table
 * Return: value of key if found else NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long index;	  /*store index of key*/
	shash_node_t *index_node; /*store the node retrived at index of ht array*/

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	index_node = ht->array[index];
	while (index_node)
	{
		if (strcmp(index_node->key, key) == 0)
			return (index_node->value);
		index_node = index_node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: address of sorted hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;
	int print_comma = 0;

	if (ht)
	{
		tmp = ht->shead;
		printf("{");
		while (tmp)
		{
			if (print_comma)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->snext;
			print_comma = 1;
		}
		puts("}");
	}
}
/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: address of sorted hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;
	int print_comma = 0;

	if (ht)
	{
		tmp = ht->stail;
		printf("{");
		while (tmp)
		{
			if (print_comma)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->sprev;
			print_comma = 1;
		}
		puts("}");
	}
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: pointer to hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node = NULL, *tmp;

	if (!ht)
		return;
	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->value);
		free(node->key);
		free(node);
		node = tmp;
	}
	free(ht->array);
	free(ht);
}
