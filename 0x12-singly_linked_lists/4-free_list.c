#include "lists.h"

/**
 *free_list - frees a list_t list
 *@head : head node of the list
 */



void free_list(list_t *head)
{
	while (head != NULL)
	{
		if (head->str)
			free(head->str);
		free(head);
		head = head->next;
	}
}
