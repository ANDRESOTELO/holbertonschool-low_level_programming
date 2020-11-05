#include "lists.h"

/**
 *listint_len - Function that returns the number of elements in a linked list.
 *@h: pointer to list
 *Return: Number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	unsigned int n_nodes;

	if (!h)
	{
		return (0);
	}
	else
	{
		/*Para recorrer la lista hasta que h sea igual a NULL*/
		for (n_nodes = 0; h != NULL; n_nodes++)
		{
			h = (*h).next;
		}
	}
	return (n_nodes);
}
