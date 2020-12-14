#include "lists.h"

/**
 *add_dnodeint_end - Function that adds a new node at the end of list
 *@head: Pointer to head
 *@n: Data node
 *Return: Address of the new element.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new_end;

	new_end = malloc(sizeof(dlistint_t));

	if (new_end == NULL) /*If malloc fails*/
	{
		return (NULL);
	}

	new_end->n = n;
	new_end->prev = NULL;
	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_end;
		new_end->prev = temp;
	}
	return (new_end);
}
