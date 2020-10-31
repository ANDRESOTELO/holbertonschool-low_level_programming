#include "lists.h"

/**
 *add_node - Function that adds a new node at the beginning of a list.
 *@head: pointer to next node
 *@str: string
 *Return: The number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
/*creo un puntero de tipo list_t llamado new_node*/
	list_t *new_node;
	unsigned int i;

/*defino la cantidad de memoria que necesito para almacenar un nodo*/
/*y devuelvo un puntero de tipo list_t*/
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
