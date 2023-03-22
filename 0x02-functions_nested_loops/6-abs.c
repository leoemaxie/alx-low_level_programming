#include "main.h"

/**
 * _abs - Computes the avsolute value of an integer.
 *
 * @n: The number.
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
