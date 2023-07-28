#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_node_end - pointer that adds a new node into a linked list
 * @head: pointer to the list
 * @str: string to add the new pointer
 *
 * Return: address of the new element, on error return NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list;

	unsigned int len = 0;

	while (str[len])
		len++;
	new_list = malloc(sizeof(list_t));

	if (!new_list)
		return (NULL);
	new_list->len = len;
	new_list->next = NULL;
	new_list->str = strdup(str);

	if (*head == NULL)
	{
		*head = new_list;
	}
	return (new_list);
}
