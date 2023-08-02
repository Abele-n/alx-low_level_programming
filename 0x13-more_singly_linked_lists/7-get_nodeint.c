#include "lists.h"

/**
 * *get_nodeint_at_index - pointer to the nth node
 * @head: pointer to the first node of the linked list
 * @index: the position of the node returned
 *
 * Return: index of the node, and NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	listint_t *present = head;

	if (counter == index)
		return present;
	while (present)
	{
		counter++;
		present = present->next;
	}
	return(present ? present: NULL);
}
