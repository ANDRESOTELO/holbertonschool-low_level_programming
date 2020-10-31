#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);


/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*
 *Function that prints all the elements of a list_t list.
 */
size_t print_list(const list_t *h);

/*
 *Function that returns the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h);

/*
 *Function that adds a new node at the beginning of a list_t list.
 */
list_t *add_node(list_t **head, const char *str);

/*
 *Function that adds a new node at the end of a list_t list.
 */
list_t *add_node_end(list_t **head, const char *str);

/*
 *Function that frees a list_t list.
 */
void free_list(list_t *head);



#endif /*_LISTS_H_*/
