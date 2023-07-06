#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: address of hash table
 */

void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *tmp = NULL;
    int begining = 1;

    if (ht)
    {
        for (i = 0; i < ht->size; i++)
        {
            if (ht->array[i])
            {
                tmp = ht->array[i];
                while (tmp)
                {
                    if (begining)
                        printf("'%s' : '%s',")
                }
            }
        }
    }
}
