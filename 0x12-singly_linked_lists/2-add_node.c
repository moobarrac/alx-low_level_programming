#include "lists.h"

/**
 *add_node - adds a new node at the beginning of a list_t list
 *@head: pointer to pointer to  head
 *@str: pointer to string
 *Everything is freed if malloc or strdup fails
 *
 *Return: the address of the new element,
 * or NULL if it failed address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (head == NULL && str == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);    /* strup allowed*/
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = _strlen(str);   /*strlen not allowed */
	node->next = *head;
	*head = node;
	return (node);
}


/**
 * _strlen - finds the length of a string
 * @str: pointer to string
 *
 * Return: length of the string
 */
int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
