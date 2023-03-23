#include "main.h"

/**
 * print_diaginal - Prints a diagonal of a given length. If less than 1, prints
 * a newline only.
 *
 * @n: Length of the diagonal.
 *
 * Return: Nothing.
 */
void print_diaginal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		_putchar('#');
		_putchar('\n');
		for (j = 0; j < i; j++)
			_putchar(' ');
	}
}
