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
	char *name;
	float age;
	char *owner;

	if (d == NULL)
		puts("(nil)");

	if (d)
	{
		name = d->name;
		age = d->age;
		owner = d->owner;

		if (name == NULL)
			name = "(nil)";
		if (owner == NULL)
			owner = "(nil)";
		
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
	}
}
