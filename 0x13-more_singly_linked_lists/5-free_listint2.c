#include "lists.h"

/**
 *free_listint2 - Function that frees a listint_t list.
 *@head: pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_head;

	if (head == NULL)
	{
		return;
	}
	/*mientras que head sea dif de NULL libere memoria*/
	while (*head != NULL)
	{
		/*con una variable temporal igualamos head para*/
		/*no perder la cabeza de la lista*/
		temp_head = *head;
		*head = (*head)->next;
		free(temp_head);
	}
	free(*head);
}
