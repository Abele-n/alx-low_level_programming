#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees each node of the list
 * @h: pointer to the first node of the linked list
 *
 * Return: size of the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;

	int diff;
	listint_t *next_node;

	if (!h || !*h)
		return (0);
	while (*h != NULL)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			next_node = (*h)->next;
			free(*h);
			(*h)->next_node;
			size++;
		}
		else
		{
			free(*h);
			(*h) = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}
