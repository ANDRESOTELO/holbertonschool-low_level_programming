#include "lists.h"

/**
 *add_node_end - add node at the end of the list
 *@head: points to head
 *@str: string
 *Return: New_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *aux = *head;
	char *str_cpy = strdup(str);
	list_t *new_node;
	int n;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	for (n = 0; str_cpy[n] != '\0'; n++)
	{

	}
	new_node->str = str_cpy;
	new_node->len = n;
	new_node->next = NULL;

	if (*head == NULL) /*si head es null entonces head es el nuevo nodo*/
	{
		*head = new_node;
	}
	else
	{
		while (aux->next != NULL) /*while aux or head exists, advance at the end*/
		{
			aux = aux->next;
		}
		aux->next = new_node;
	}
	return (new_node);
}
