#include "lists.h"

/**
 * sum_dlistint -  sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to head node
 * Return: sum of all the data or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int i, sum;

	i = 0, sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
		i++;
	}
	return (sum);
}
