#include "main.h"

/**
 * print_diagonal - Prints a diagonal of a given length. If less than 1, prints
 * a newline only.
 *
 * @n: Length of the diagonal.
 *
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
