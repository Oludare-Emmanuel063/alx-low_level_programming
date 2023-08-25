#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: list with single link
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t num_0f_node = 0;

	while (h != NULL)
	{
		h = h->next;
		num_of_node++;
	}
	return (num_of_node);
}
