#include "main.h"

/**
 * print_squaree - Prints a square of a given size. If less than 1, prints
 * a newline only.
 *
 * @size: Size of the square.
 *
 * Return: Nothing.
 */
void print_squaree(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
