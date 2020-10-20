#include "dog.h"
#include <stdlib.h>
#include <stdio.h>


/**
 *free_dog - Function that frees dogs.
 *@str: size of array
 *Return: A pointer to the duplicated string.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
