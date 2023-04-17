#include "dog.h"

/**
 * new_dog - Creates a new dog with the specified fields.
 *
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 *
 * Return: A pointer to a new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = strdup(name);
	dog->owner = strdup(owner);
	dog->age = age;

	if (dog->name == NULL || dog->owner == NULL)
		return (NULL);

	return (dog);
}
