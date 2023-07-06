#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: address of hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = NULL;
	int print_comma = 0;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				tmp = ht->array[i];
				while (tmp)
				{
					if (print_comma)
						printf(", ");
					printf("'%s': '%s'", tmp->key, tmp->value);
					tmp = tmp->next;
					print_comma = 1;
				}
			}
		}
		puts("}");
	}
}
