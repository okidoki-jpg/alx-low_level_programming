#include "hash_tables.h"

/**
 * key_index - get hash table index from key
 * @key: string to hash
 * @size: table/array size
 *
 * Return: index value of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
