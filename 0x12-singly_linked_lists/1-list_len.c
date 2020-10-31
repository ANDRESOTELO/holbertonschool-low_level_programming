#include "lists.h"

/**
 *list_len - Function that returns the number of elements in a linked list_t.
 *@h: pointer to next node
 *Return: The number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int nodes;


	if (!h)
	{
		return (0);
	}
	else
	{
		for (nodes = 0; h != NULL; nodes++)
		{
			h = (*h).next;
		}

	}
	return (nodes);
}
