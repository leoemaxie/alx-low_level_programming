#include "main.h"

/**
 * print_sign - prints the sign of numbers based on their positivity or
 * negativity
 *
 * @n: the number to be compared
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is
 * less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(46);
		return (0);
	}
	_putchar('_');
	return (-1);
}
