#include "hash_tables.h"

/**
 * hash_djb2 - A hash function implementing the djb2 algorithm.
 *
 * @str: The string to hash.
 *
 * Return:  The hash of a string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned int i;
	unsigned long int hash = 5381;

	for (i = 0; str[i]; i++)
		hash = ((hash << 5) + hash) + (int)str[i];

	return (hash);
}
