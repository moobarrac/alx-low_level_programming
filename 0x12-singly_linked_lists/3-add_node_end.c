#include "lists.h"

/**
 * _strlen - calculates the lengthof a string
 * @str: pointer to the str
 *
 * Return: length of a string
 */
int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


/**
 * add_node_end - add node at the end of a list
 * @head: head of the list
 * @str: string
 *
 * Return: linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* allocate new_node */
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);   /* put in data */
	new_node->len = _strlen(str);   /* put in data */
	new_node->next = NULL;         /* last node so ref is NULL */

	if (*head == NULL)         /* if linked list is empty */
	{
		*head = new_node;  /* then new_node will be head */
		return (new_node);
	}
	else                         /* else traverse till last node */
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;      /* change the next of last node */
	return (new_node);
}
