#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to the head of the first element in the linked list
 * @n: data for the new element
 *
 * Return: the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *present = *head;

	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	while (present->next != NULL)
		present = present->next;
	new_node = present->next;

	return (new_node);
}
