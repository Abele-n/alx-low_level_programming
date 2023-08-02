#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to the first node of the list
 *
 * Return: a pointer to the first node of the reverse link
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t previous = NULL;
	listint_t next = NULL;

	while (present)
	{
		listint_t *next_node = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next_node;
	}
	*head = previous;

	return (*head);
}
