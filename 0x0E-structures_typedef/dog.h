#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Struct for dog and owner data
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Data about name, age and owner for a dog
 */

typedef struct dog
{

	char *name;
	float age;
	char *owner;
} dog_t;

/* Function that initialize a variable of type struct dog*/

void init_dog(struct dog *d, char *name, float age, char *owner);


/*Function that prints a struct dog*/

void print_dog(struct dog *d);

/*function that creates a new dog*/
dog_t *new_dog(char *name, float age, char *owner);

/*function that frees dogs.*/
void free_dog(dog_t *d);

#endif /*_DOG_H_*/
