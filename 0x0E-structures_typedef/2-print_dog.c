#include "dog.h"

/**
 * print_dog - Prints the dog's fields.
 *
 * @d: The dog object (structure).
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{	
	if (d == NULL)
		puts("nil");
	if (d->name == NULL)
		puts("Name: (nil)");
	if (d->name == NULL)
		puts(nil)
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
