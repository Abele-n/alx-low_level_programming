#include "lists.h"

/**
 * dlistint_len - gets number of elements in the linked double list
 * @h: pointer to head list
 *
 * Return: the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number_nodes = 0;

	if (h == NULL)
		return (number_nodes);
	while (h != NULL)
	{
		number_nodes++;
		h = h->next;
	}
	while (h->prev != NULL)
		h = h->prev;

	return number_nodes;
}
