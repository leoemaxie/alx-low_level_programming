#include "main.h"
#include <stdio.h>
/**
 * print_number - Prints an integer to stdout.
 *
 * @s: The number.
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	int rem;

	if (n < 0)
	{
		n = -n; /* Converts n to a positive number to prevent a leading minus */
		putchar(45); /* ascii code for - */
	}

	while (n != 0)
	{
		rem = n % 10;
		putchar(rem + 48);
		n = n / 10;
	}
}
