#include "lists.h"

/**
 *delete_dnodeint_at_index - Function that deletes the node at index
 *@head: Pointer to head
 *@index: Index of the node that should be deleted
 *Return: 1 if success or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (temp != NULL && index == 0)
	{
		*head = (*head)->next;

		if (temp->next)
		{
			/*Le asigno al previo del siguiente NULL*/
			temp->next->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (temp)
	{
		temp = temp->next;
		count++;

		if (count == index)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
			{
				temp->next->prev = temp->prev;
			}
			free(temp);
			return (1);
		}
	}
	return (-1);
}
