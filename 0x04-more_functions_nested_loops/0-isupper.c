#include "main.h"

/**
 * _isupper - Checks whether a character is in uppercase.
 * 
 * @c: The character to be checked.
 *
 * Return: 1 if c is in uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122) return (1);
	return (0);
}
