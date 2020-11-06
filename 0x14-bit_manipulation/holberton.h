#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*Function that converts a binary number to an unsigned int.*/
unsigned int binary_to_uint(const char *b);

/*Function that prints the binary representation of a number.*/
void print_binary(unsigned long int n);

/*Function that returns the value of a bit at a given index.*/
int get_bit(unsigned long int n, unsigned int index);

/*Function that sets the value of a bit to 1 at a given index.*/
int set_bit(unsigned long int *n, unsigned int index);

/*Function that sets the value of a bit to 0 at a given index.*/
int clear_bit(unsigned long int *n, unsigned int index);

/*Function number of bits you would need to flip to get from one num to other*/
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif /*_HOLBERTON_H_*/
