#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: array size
 * 
 * Return: NULL incase of an error
 * Otherwise return a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int y = 0;
	
	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	new_hash_table = malloc(sizeof(hash_node_t *) * sizs);
	if (new_hash_table == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
		new_hash_table->array[y] = NULL;

	new_hash_function->size = size;
	return (new_hash_table);
}
