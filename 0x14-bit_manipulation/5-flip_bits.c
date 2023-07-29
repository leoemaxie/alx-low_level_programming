#include "main.h"
/**
 * flip_bits - Flips a bit to get from one number to another.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits you would need to flip to get from ome number
 * to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m, result = 1;
	unsigned int j = 0, i;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (diff & result))
			j++;
		result <<= 1;
	}

	return (j);
}
