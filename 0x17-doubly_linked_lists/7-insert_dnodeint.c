#include "lists.h"

/**
 *insert_dnodeint_at_index - Insert new node at position
 *@h: Pointer to head
 *@idx: Index of the list to add node
 *@n: Data of new_node
 *Return: The address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new_node = NULL;
	unsigned int count = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	/*new_node->prev = NULL;*/
	/*new_node->next = NULL;*/

	while (tmp->next)
	{
		tmp = tmp->next;
		count++;
		if (count == idx)
		{
			new_node->prev = tmp->prev;
			tmp->prev = new_node;
			new_node->next = tmp;
			new_node->prev->next = new_node;
			return (new_node);
		}
		if (tmp->next == NULL)
			return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
