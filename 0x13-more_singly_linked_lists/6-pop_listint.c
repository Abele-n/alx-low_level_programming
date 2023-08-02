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

	if (*head == NULL || head == NULL)
	{
		num_del = (*head)->n;
		free(*head);
		present = (*head)->next;
		*head = present;
	}
	else
	{
		return (0);
	}
	return (num_del);
}
