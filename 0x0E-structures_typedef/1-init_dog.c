#include "dog.h"

/**
 * init_dog - Initializes a dog with the specified fields.
 *
 * @d: The dog object (structure).
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 *
 * Return: Nothing.
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
