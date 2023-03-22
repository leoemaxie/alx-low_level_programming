#include "main.h"

/**
 * _islower - Checks whether a character is in lowercase.
 *
 * @c: The character to be checked
 *
 * Return: 1 if c is in lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
