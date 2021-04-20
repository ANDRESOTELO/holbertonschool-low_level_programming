#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*
 * Function that searches for a value in an array of integers
 * using the Linear search algorithm
 */
int linear_search(int *array, size_t size, int value);

/*
 * Function that searches for a value in a sorted array of integers
 * using the Binary search algorithm
 */
int binary_search(int *array, size_t size, int value);

#endif /*_SEARCH_ALGOS_H_*/
