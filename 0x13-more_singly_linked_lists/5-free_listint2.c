#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees the memory of a linked list
 * @head: pointer of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *present;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		present = (*head)->next;
		free(*head);
		*head = present;
	}
	*head = NULL;
}
