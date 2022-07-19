#include "lists.h"

/**
 *print_listint_safe - prints a listint_t linked list.
 * @head: pointer to head node
 * This function can print lists with a loop
 * You should go through the list only once
 * If the function fails, exit the program with status 98
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int i;

	i = 0;
	while (head != NULL)
	{
		if ((head->next) >= (head))   /* if loop in list */
		{
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		return (i);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		i++;
		head = head->next;
	}
	exit(98);
}
