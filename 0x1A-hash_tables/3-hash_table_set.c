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
	hash_node_t *element;

	if (ht == NULL)
	{
		printf("Hash table doesnt exist\n");
		return (0);
	}
	if (key == NULL)
	{
		printf("Key is and empty string\n");
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	element = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (element == NULL)
	{
		printf("Failed to allocate memory for element\n");
		return (0);
	}

	element->key = strdup(key);
	element->value = strdup(value);
	element->next = NULL;

	if (ht->array[index] == 0)
	{
		ht->array[index] = element;
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			ht->array[index]->value = strdup(value);
			free(element);
		}
		element->next = ht->array[index];
		ht->array[index] = element;
	}

	return (1);
}
