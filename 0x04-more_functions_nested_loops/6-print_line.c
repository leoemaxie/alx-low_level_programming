#include "main.h"

/**
 * print_line - Prints a line of a given length. If less than 1, prints
 * a newline only.
 *
 * @n: Length of the line.
 *
 * Return: Nothing.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
