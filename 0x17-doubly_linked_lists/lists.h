#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/*function that prints all the elements of a dlistint_t list*/
size_t print_dlistint(const dlistint_t *h);

/*Function that returns the number of elements*/
size_t dlistint_len(const dlistint_t *h);

#endif /*_LISTS_H_*/
