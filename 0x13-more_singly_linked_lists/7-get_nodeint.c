#include "lists.h"

/**
 *get_nodeint_at_index - Function that returns the nth node of a linked list
 *@head: pointer to node
 *@index: is the index of the node.
 *Return: the nth node of a list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp_head = head;
	unsigned int count;

	/*if index is equal to 0 return head*/
	if (index == 0)
	{
		return (temp_head);
	}
	/*if head exists go to the for and iterates searching index == count*/
	if (head != NULL)
	{
		for (count = 0; head != NULL; count++)
		{
			/*when count is equal to index, return the node*/
			if (count == index)
			{
				return (temp_head);
			}
			/*now temp_head is equal to the next node*/
			temp_head = (temp_head)->next;
		}
	}
	return (NULL);
}
