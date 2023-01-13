#include "hash_tables.h"

/**
 * hash_table_get - retrieve value from hash table
 * @ht: hash table
 * @key: index key for table
 *
 * Return: value, else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = ht->array[key_index((unsigned char *)key, ht->size)];

	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
