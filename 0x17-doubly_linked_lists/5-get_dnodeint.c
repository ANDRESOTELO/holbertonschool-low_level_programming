#include "lists.h"

/**
 *get_dnodeint_at_index - Function that returns the nth node
 *@head: Pointer to head of the list
 *@index: is the index of the node
 *Return: returns the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (tmp->next)
	{
		if (i == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
