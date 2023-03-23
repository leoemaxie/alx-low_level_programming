#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size. If less than 1, prints
 * a newline only.
 *
 * @size: Size of the triangle.
 *
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
			_putchar('#');
		_putchar('\n');
	}
}
