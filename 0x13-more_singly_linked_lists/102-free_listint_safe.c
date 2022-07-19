#include "list.h"

/**
 * free_listint_safe - free a listint_t list and set head to null
 * @h: 2x pointer to head of linked list
 * Description: should work for circular lists
 * Return: size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *hold;
	size_t count;

	count = 0;
	current = *h;
	while (current != NULL)
	{
		count++;
		hold = current;
		current = current->next;
		free(hold);

		if (hold < current)
			break;
	}
	*h = NULL;

	return (count);
}
