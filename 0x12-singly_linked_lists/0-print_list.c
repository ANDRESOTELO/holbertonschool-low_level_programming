#include "lists.h"

/**
 *print_list - Function that prints all the elements of a list_t list.
 *@h: pointer to next node
 *Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int n_nodes, len_n;
	char *string;


	if (!h)
	{
		return (0);
	}
	else 
	{
		for (n_nodes = 0; h != NULL; n_nodes++)
		{
			len_n = (*h).len;
			string = (*h).str;

			if (string == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%u] ", len_n);
				printf("%s\n", string);
			}
			h = (*h).next;
		}

	}
	return (n_nodes);
}
