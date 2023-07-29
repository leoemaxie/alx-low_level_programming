#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: Pointer to number bit.
 * @index: The index of the bit you want to set starting from 0.
 *
 * Return: 1 on success, -1 if an error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bit = 1 << index;
	*n = *n | bit;

	return (1);
}
