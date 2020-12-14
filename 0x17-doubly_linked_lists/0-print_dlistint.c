#include "lists.h"

/**
 *print_dlistint - Function that prints all the elements of a list.
 *@h: Points to head
 *Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h; /*Temp guarda head para no perder la cabeza*/
	int i = 0; /*number of nodes*/

	if (h == NULL)
	{
		return (0);
	}
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
