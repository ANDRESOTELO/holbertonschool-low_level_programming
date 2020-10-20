#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *init_dog - function that initialize a variable of type struct dog
 *@d: struct name
 *@name: Second member
 *@age: Third member
 *@owner: Fourth member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
