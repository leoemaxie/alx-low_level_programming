#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 *
 * @n: The number.
 * @index: The index, starting from 0 of the bit you want to get.
 *
 * Return: The value of the bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	div = 1 << index;
	res = n & div;

	if (res == div)
		return (1);

	return (0);
}
