#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a dlistint_t list
 * @head: pointer to the dlistint_t list
 * @n: integer to be included in the node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *node2;

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	node2 = *head;

	while (node2->next != NULL)
	{
		node2 = node2->next;
	}

	node2->next = node;
	node->prev = node2;

	return (node);
}
