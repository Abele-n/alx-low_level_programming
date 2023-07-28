#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - a new node is added at the beginning of linked lists
 * @head: double pointer to list
 * @str: new string added to the node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *my_new;

	unsigned int length = 0;

	my_new = malloc(sizeof(list_t));

	if (!my_new)
		return (NULL);
	while (str[length])
		length++;
	my_new->str = strdup(str);
	my_new->length = length;
	my_new->next = (*head);
	*head = my_new;

	return (*head);
}
