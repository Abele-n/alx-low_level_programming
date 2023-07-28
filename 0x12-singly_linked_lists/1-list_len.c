#include "lists.h"
#include <stdlib.h>

/**
 * list_len - gives the number of elements available in the list
 * @h: pointer to the list
 *
 * Return: total elements in h
 */

size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		h = h->next;
		m++;
	}
	return (m);
}
