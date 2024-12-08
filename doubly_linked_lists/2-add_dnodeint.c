#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a dlistint_t list
 * @head: pointer to the dlistint_t list
 * @n: integer to be included in the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));

	if (head == NULL || node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = node;
	}

	*head = node;

	return (node);
}
