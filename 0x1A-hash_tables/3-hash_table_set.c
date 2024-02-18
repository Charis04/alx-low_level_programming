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
	hash_node_t *item;

	if (key == NULL)
	{
		printf("Key is and empty string");
		return (0);
	}

	item = (hash_node_t *) malloc(sizeof(hash_node_t));
	index = key_index((const unsigned char *)key, ht->size);

	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = item;
	}
	else
	{
		item->next = ht->array[index];
		ht->array[index] = item;
	}

	return (1);
}
