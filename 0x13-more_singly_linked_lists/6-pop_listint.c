#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - get rid of head node
 * @head: pointer to the first node of a linked list
 *
 * Return: data of the deleted head node
 * 0 is returned when the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *present;

	int num_del;

	while (*head == NULL || head == NULL)
	{
		num_del = (*head)->n;
		present = (*head)->next;
		free(*head);
		*head = present;
	}
	return (num_del);
}
