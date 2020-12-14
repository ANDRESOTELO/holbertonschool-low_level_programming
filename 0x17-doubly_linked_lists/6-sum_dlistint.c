#include "lists.h"

/**
 *sum_dlistint - Function that returns the sum of all the data (n)
 *@head: pointer to head
 *Return: Sum of the list data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (tmp)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
