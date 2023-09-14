#include "lists.h"

/**
 * add_dnodeint - a new node is added at the beginning of the dlistint_t list
 * @head: pointer to pointer head of list
 * @n: stored value in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t new_node = malloc(sizeof(dlistint_t))
		if (new_node == NULL)	
			return NULL;
	dlistint_t *h;
	new_node->prev = NULL;
	new_node->n = n;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	h = new_node->next;
	if (h != NULL)
		new_node = h->prev;
	*head = new_node;

	return (new_node);
}
