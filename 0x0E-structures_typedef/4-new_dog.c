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

	firulais->name = _strdup(name);
	if (firulais->name == NULL)
	{
		free(firulais->name);
		return (NULL);
	}

	firulais->age = age;

	firulais->owner = owner;
	if (firulais->owner == NULL)
	{
		free(firulais->owner);
		return (NULL);
	}
	return (firulais);
}
