#include "lists.h"

/**
 * sum_listint - gets the sum of all the elents in a linked list
 * @head: pointer to the node of the first node
 * Return: sum obtained
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *present = head;

	while (present)
	{
		sum += present->n;
		present = present->next;
	}
	return (sum);
}
