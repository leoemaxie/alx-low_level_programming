#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n: Pointer to the number you want to clear a bit from.
 * @index: starting from 0 of the bit you want to set.
 *
 * Return: 1 on success, or -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit = ~(1 << index);
	*n = *n & bit;

	return (1);
}
