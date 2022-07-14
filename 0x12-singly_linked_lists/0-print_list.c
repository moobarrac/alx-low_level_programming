#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list
 * @h: linked list
 *
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		i++;
		h = h->next;
	}
	return (i);
}
