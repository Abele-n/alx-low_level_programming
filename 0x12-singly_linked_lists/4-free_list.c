#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: list set to be freed
 */

void free_list(list_t *head)
{
	list_t *nxt_node;

	while (head)
	{
		nxt_node = head->next;
		free(head->str);
		free(head);
	}
}
