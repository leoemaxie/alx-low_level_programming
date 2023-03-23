#include "main.h"

/**
 * _isdigit - Checks whether a character is a digit.
 * 
 * @c: The character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 46 && c <= 55) return (1);
	return (0);
}
