#include "lists.h"

/**
 *free_dlistint - Function that frees a dlistint_t list.
 *@head: Pointer to head
 *Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (tmp)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
