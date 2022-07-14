#include "lists.h"

/**
 * list_len - returns the elements in a linked list
 * @h: pointer to linked list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
