#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - gets the number of elements in the linked list
 * @h: pointer to the number of elements in the linked list
 *
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *present = h;

	size_t counter = 0; /*initializes the node count*/

	while (present != NULL)
	{
		counter++;
		present = present->next;
	}
	return (counter);
}
