#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct sorted_hash_node_s - the sorted node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * sorted_prev: pointer to previous elementin the sorted list
 * sorted_next: pointer to the next element in the sorted list
 */
typedef struct sorted_hash_node_s
{
     char *key;
     char *value;
     struct sorted_hash_node_s *next;
     struct sorted_hash_node_s *sorted_prev;
     struct sorted_hash_node_s *sorted_next;
} sorted_hash_node_t;

/**
 * struct sorted_hash_table_s - sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @sorted_head: pointer to first element of the sorted linked list
 * @sorted_tail: pointer to last element of the sorted list
 */
typedef struct sorted_hash_table_s
{
     unsigned long int size;
     sorted_hash_node_t **array;
     sorted_hash_node_t *sorted_head;
     sorted_hash_node_t *sorted_tail;
} sorted_hash_table_t;

sorted_hash_table_t *sorted_hash_table_create(unsigned long int size);
int sorted_hash_table_set(sorted_hash_table_t *ht, const char *key, const char *value);
char *sorted_hash_table_get(const sorted_hash_table_t *ht, const char *key);
void sorted_hash_table_print(const sorted_hash_table_t *ht);
void sorted_hash_table_print_rev(const sorted_hash_table_t *ht);
void sorted_hash_table_delete(sorted_hash_table_t *ht);

#endif
