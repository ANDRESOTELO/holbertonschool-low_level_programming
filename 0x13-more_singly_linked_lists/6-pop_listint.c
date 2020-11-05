#include "lists.h"

/**
 *pop_listint - Func delete head node of linked list.
 *@head: pointer to a pointer
 *Return: the head nodes data(n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_head;
	int temp;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		temp_head = *head;
		*head = (*head)->next;
		temp = temp_head->n;
	}
	free(temp_head);
	return (temp);
}
