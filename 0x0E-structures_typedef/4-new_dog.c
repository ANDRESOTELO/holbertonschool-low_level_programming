#include "dog.h"
#include <stdlib.h>
#include <stdio.h>


/**
 *_strdup - Function that returns a pointer to a newly
 *@str: size of array
 *Return: A pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int i = 0;
	char *dest;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[i] != '\0' ; i++)
	{
	}
	i++; /*agrega el caracter nulo al string*/
	dest = malloc(sizeof(*dest) * i + 1);

	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] ; i++)
	{
		dest[i] = str[i];
	}
	return (dest);
}

/**
 *new_dog - function that creates a new dog.
 *@name: Second member
 *@age: Third member
 *@owner: Fourth member
 *Return: dog_t type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *firulais;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	firulais = malloc(sizeof(dog_t));

	if (firulais == NULL)
	{
		return (NULL);
	}
	firulais->name = _strdup(name);
	if (firulais->name == NULL)
	{
		free(firulais);
		return (NULL);
	}
	firulais->age = age;
	firulais->owner = _strdup(owner);
	if (firulais->owner == NULL)
	{
		free(firulais->name);
		free(firulais);
		return (NULL);
	}
	return (firulais);
}
