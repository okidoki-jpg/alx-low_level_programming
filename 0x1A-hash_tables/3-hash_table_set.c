#include "hash_tables.h"

/**
 * hash_table_set - set hash table value
 * @ht: hash table
 * @key: index key
 * @value: key's value
 *
 * Return: 1 on success, else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int idx;

	if (!ht || !key || !value || !strlen(key))
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = (char *) strdup(key);
	node->value = (char *) strdup(value);
	node->next = NULL;

	if (!ht->array[idx])
		ht->array[idx] = node;
	else
	{
		node->next = ht->array[idx];
		ht-array[idx] = node;
	}
	return (1);
}
