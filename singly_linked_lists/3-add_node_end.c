#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the list_t list
 * @str: string to be added to the list_t list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *node2;
	int i = 0;

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);

	while (str[i])
	{
		i++;
	}

	node->len = i;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	node2 = *head;

	while (node2->next != NULL)
	{
		node2 = node2->next;
	}

	node2->next = node;

	return (node);
}
