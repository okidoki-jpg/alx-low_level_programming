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
	hash_node_t *node = malloc(sizeof(hash_node_t));
    const unsigned char *k = (const unsigned char *) key;
	unsigned long int idx = key_index(k, ht->size);

	if (!node)
		return (0);

	node->key = (char *) key;
	node->value = (char *) value;

	if (!ht->array[idx])
		ht->array[idx] = node;
	else
		ht = collision(ht, key, value);

	return (1);
}

/**
 * collision - handle collision
 * @ht: hash table
 * @key: index key
 * @value: key's value
 *
 * Return: modified hash table
 */

hash_table_t *collision(hash_table_t *ht, const char *key, const char *value)
{
    const unsigned char *k = (const unsigned char *) key;
	unsigned long int idx = key_index(k, ht->size);
	hash_node_t *tail = ht->array[idx];
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (NULL);

	node->key = (char *) k;
	node->value = (char *) value;
	node->next = tail;

	ht->array[idx] = node;

	return (ht);
}
