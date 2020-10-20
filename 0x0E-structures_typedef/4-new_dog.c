#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *new_dog - function that creates a new dog.
 *@name: Second member
 *@age: Third member
 *@owner: Fourth member
 *Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *firulais;

	firulais = malloc(sizeof(dog_t));

	if (firulais == NULL)
	{
		return (NULL);
	}

	firulais->name = name;
	firulais->age = age;
	firulais->owner = owner;
	return (firulais);
}
