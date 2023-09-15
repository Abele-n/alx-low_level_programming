#include "lists.h"

/**
 * free_dlistint - dlistint_t list is freed
 * @head: pointer to the head
 */

void free_dlistint(dlistint_t *head)
{
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	if (head == NULL)
		return;

	free(head);
}
