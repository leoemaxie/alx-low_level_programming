#include "main.h"

/**
 * print_most_numbers - Prints number 0 to 9 excluding 2 qnd 4.
 *
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + 46);
	}
	_putchar('\n');
}
