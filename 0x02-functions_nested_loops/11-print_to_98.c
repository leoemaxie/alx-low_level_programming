#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural number from n to 98
 *
 * @n: the number to start from
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	for (n; n < 98; n++)
		printf("%i, " n);
	printf("%i", n + 1);
}
