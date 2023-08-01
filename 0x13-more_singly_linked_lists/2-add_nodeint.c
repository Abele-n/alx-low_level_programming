#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *add_nodeint - adds a new node to the linkdd list
 * @head: pointer to the head in the list
 * @n: data for the new node
 *
 * Return: the new node, if it fails NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	else
		return (NULL);
	return (new_node);
}
