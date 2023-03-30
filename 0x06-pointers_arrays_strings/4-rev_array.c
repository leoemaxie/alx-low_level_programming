#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: Pointer to the array.
 * @n: Number of elements of the array.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int tmp = a[i];
		int size = n - 1;

		a[i] = a[size - i];
		a[size - i] = tmp;
	}
}
