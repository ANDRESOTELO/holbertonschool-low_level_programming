#include "lists.h"

/**
 *add_nodeint_end - Function that adds a new node at the end of a list.
 *@head: pointer to next node
 *@n: number
 *Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*creo una variable tipo listint_t que se llama new_node*/
	listint_t *new_node_end;
	listint_t *tmp_aux = *head;
	/*creo el espacio en memoria dinamica suficiente para*/
	/*almacenar un nodo (listint_t)*/
	new_node_end = (listint_t *)malloc(sizeof(listint_t));
	if (new_node_end == NULL)
	{
		return (NULL);
	}
	/*agrego datos al nodo, como es un struct ingreso datos por medio de ->*/
	new_node_end->n = n;
	new_node_end->next = NULL;
	if (*head == NULL)
	{
		*head = new_node_end;
	}
	else
	{
		/*para agregar el nodo de ultimo debo recorrer la lista*/
		/*usando una variable auxiliar*/
		while (tmp_aux->next)
		{
			tmp_aux = tmp_aux->next;
		}
		tmp_aux->next = new_node_end;
	}
	return (new_node_end);
}
