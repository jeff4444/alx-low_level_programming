#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: dog name member
 * @age: dog age member
 * @owner: dog owner member
 *
 * Return: Null (Fail) dog (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
