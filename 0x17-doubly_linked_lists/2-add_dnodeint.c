#include "lists.h"

/**
 *add_dnodeint - Function that adds a new node at the beginning
 *@head: Pointer to head
 *@n: Data of node
 *Return: Address of the new element.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		new_node->next = tmp;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
