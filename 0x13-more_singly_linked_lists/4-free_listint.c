#include "lists.h"

/**
 *free_listint - Function that frees a listint_t list.
 *@head: pointer to head
 */

void free_listint(listint_t *head)
{
	listint_t *temp_head;

	/*mientras que head sea dif de NULL libere memoria*/
	while (head != NULL)
	{
		/*con una variable temporal igualamos head para*/
		/*no perder la cabeza de la lista*/
		temp_head = head->next;
		free(head);
		head = temp_head;
	}
	head = NULL;
}
