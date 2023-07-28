#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elements of a linked list
 * @h: pointer to the list to print
 *
 * Return: number of modes printed
 */

size_t print_list(const list_t *h)
{
	size_t d = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	d++;
	return (0);
}
