#include "hash_tables.h"
/**
 * key_index - gets the index of a key
 * @key: key string of value to be added to the table
 * @size: size of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	if (key && size)
	{
		index = hash_djb2(key) % size;
	}
	return (index);
}
