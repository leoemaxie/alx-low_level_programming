#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 *
 * @s: Pointer to the string.
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int i, n = 0;

	while (s[n] != '\0')
	{
		n++;

		for (i = n; i >= 0; i--)
			_putchar(s[i]);
	}
	_putchar('\n');
}
