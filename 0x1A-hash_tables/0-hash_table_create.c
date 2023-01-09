#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size to assign table
 *
 * Return: pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));

	if (ht->array == NULL)
		return (NULL);

	return (ht);
}
