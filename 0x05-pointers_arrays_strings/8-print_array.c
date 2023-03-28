#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints specified number of elements of an array of integers,
 * followed by a new line.
 *
 * @a: Pointer to the string.
 * @n: Number of elements of the array to be printed.
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%i, ", a[i]);
		else
			printf("%i", a[n - 1]);
	}
	putchar('\n');
}
