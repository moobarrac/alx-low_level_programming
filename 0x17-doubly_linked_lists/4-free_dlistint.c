#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: points to header node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
