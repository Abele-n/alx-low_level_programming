#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees memory of present node
 * @head: pointer to the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *present;

	while (head != NULL)
	{
		present = head->next;
		free(head);
		head = present;
	}
}
