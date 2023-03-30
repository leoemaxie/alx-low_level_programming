#include "main.h"

/**
 * print_number - Prints an integer to stdout.
 *
 * @s: The number.
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n; /* Converts n to a positive number to prevent a leading minus */
		_putchar(45); /* ascii code for - */
	}

	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + 48);
}
