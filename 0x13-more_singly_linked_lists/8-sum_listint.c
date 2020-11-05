#include "lists.h"

/**
 *sum_listint - Function returns the sum of all the data (n) of linked list.
 *@head: points to first node
 *Return: 0 is head is empty.
 */

int sum_listint(listint_t *head)
{
	listint_t *temp_head = head;
	unsigned int sum = 0, count;

	for (count = 0; temp_head != NULL; count++)
	{
		sum = sum + temp_head->n;
		temp_head = temp_head->next;
	}
	return (sum);
}
