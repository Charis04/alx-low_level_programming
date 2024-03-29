#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: a pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);
	ht->size = size;

	ht->array = (hash_node_t **) calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
		return (NULL);

	return (ht);
}
