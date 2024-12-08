#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the list_t list
 * @str: string to be added to the list_t list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int i = 0;

	node = malloc(sizeof(list_t));

	if (head == NULL || node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->str = strdup(str);

	while (str[i])
	{
		i++;
	}

	node->len = i;
	node->next = *head;
	*head = node;

	return (node);
}
