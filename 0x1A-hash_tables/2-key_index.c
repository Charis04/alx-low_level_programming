#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key whose index is to be found
 * @size: size of the hash table
 *
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
