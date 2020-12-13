#include "lists.h"

/**
 *free_list - Free linked list
 *@head: points to first node
 *Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *aux;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
}
