#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 *
 * @n: The number.
 * @index: The index, starting from 0 of the bit you want to get.
 *
 * Return: The value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n)
	{
		if (i == index)
			break;
		n /= 2;
		i++;
	}

	if (i < index)
		return (-1);
	return (n % 2);
}
