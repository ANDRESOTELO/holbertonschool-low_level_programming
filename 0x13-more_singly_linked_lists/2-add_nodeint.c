#include "lists.h"

/**
 *add_nodeint - Function that adds a new node at the beginning of the Blist.
 *@head: double pointer
 *@n: int in the list
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	/*creo una variable tipo listint_t que se llama new_node*/
	listint_t *new_node;

	/*creo el espacio en memoria dinamica suficiente para*/
	/*almacenar un nodo (listint_t)*/
	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (new_node != NULL)
	{
		/*agrego datos al nodo, como es un struct ingreso datos por medio de ->*/
		new_node->n = n;
		new_node->next = NULL;

		if (head == NULL)
		{
			*head = new_node;
		}
		else
		{
			/*Para agregar el nodo de primero debo apuntar el nuevo nodo*/
			/*head y hacer que head ahora sea el nuevo nodo*/
			new_node->next = *head;
			*head = new_node;
		}
	}
	return (new_node);
}
