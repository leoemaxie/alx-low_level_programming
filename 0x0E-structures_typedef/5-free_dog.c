#include "dog.h"

/**
 * free_dog - Frees the dynamic memory allocated to dogs.
 *
 * @d: The dog object (structure).
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
