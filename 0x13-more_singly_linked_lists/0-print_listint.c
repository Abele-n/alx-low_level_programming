#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints the number of linked lists pointer to h
 * @h: pointer to the linked lists
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *present = h;

	size_t counter = 0; /*initializes the node count*/

	while (present != NULL)
	{
		printf("%d\n", present->n);
		counter++;
		present = present->next;
	}
	return (counter);
}
