#include "lists.h"

/**
 * print_dlistint - prints every element of the dlistint_t list
 * @h: pointer to the head list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t number_nodes = 0;

	if (h == NULL)
		return (number_nodes);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_nodes++;
	}
	return (number_nodes);
}
