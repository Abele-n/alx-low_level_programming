#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to the first node of the list
 *
 * Return: a pointer to the first node of the reverse link
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *present = NULL;
	listint_t *prev = NULL;

	while (head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
