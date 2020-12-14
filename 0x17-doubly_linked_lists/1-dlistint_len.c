#include "lists.h"

/**
 *dlistint_len - Function that returns the number of elements in a linked list
 *@h: Pointer to head
 *Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
