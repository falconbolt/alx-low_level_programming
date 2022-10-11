#include "dog.h"

/**
  * init_dog - Initializes variables found in the structure, dog.
  * @d: Pointer to the structure dog.
  * @name: Name of the dog.
  * @age: Age of the dog.
  * @owner: Owner of the dog.
  * Return: void.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
