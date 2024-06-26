#ifndef SORTING_ALGOS_H
#define SORTING_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - this is a singly linked list
 * @n: An integer
 * @index: Node index of the list
 * @next: Pointer to next node
 *
 * Description: singly linked node structure
 */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - this is a singly linked list
 * @n: An integer
 * @index: Node index of the list
 * @next: Pointer to next node
 * @express: pointer to next node in the express lane
 *
 * Description: singly linked node structure
 */

typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
