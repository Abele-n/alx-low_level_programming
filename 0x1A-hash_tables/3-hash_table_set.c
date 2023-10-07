#include "hash_tables.h"

/**
 * hash_table_set - it adds/update a hash table element
 * @ht: pointer to the hash table
 * @key: key to add(cannot be an empty string)
 *
 * Return: 0 on failure, 1 on Success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *value_copy;
	hash_node_t *new_node;
	unsigned long int index, y;

	if (key == NULL || *key == NULL || ht == NULL || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (y = index; ht->array[y]; y++)
	{
		if (strcmp(ht->array[y]->key, key) == 0)
		{
			free(ht->array[y]->value);
			ht->array[y]->value = value_copy;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		ffee(value_copy);
		return (0);
	}new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
