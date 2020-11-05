#include "lists.h"

/**
 *print_listint - Function that prints all the elements of a listint_t list.
 *@h: head of the list
 *Return: n_nodes Number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int n_nodes, len_n;

	/*if h == NULL return 0*/
	if (!h)
	{
		return (0);
	}
	else
	{
		/*if h exists prints the elements of a list*/
		for (n_nodes = 0; h != NULL; n_nodes++)
		{
			/*(*h).n is the element that contains the int n*/
			len_n = (*h).n;
			printf("%d\n", len_n);
			h = (*h).next;
		}
	}
	return (n_nodes);
}
