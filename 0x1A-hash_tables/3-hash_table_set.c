#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: key of the element
 * @value: value of the element
 *
 * Return: 1 on success and 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t item = (hash_node_t *) malloc(sizeof(hash_node_t));

	if (key == NULL)
	{
		printf("Key is and empty string");
		free(item);
		return (0);
	}

	index = key_index(key, ht->size);

	item->key = key;
	item->value = strdup(value);
	item->next = NULL;

	return (1);
}
