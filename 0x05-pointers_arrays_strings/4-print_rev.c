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
	int len = _strlen(s);
	char *t = s + len - 1;

	while (*t)
	{
		_putchar(*t);
		t--;
	}
	_putchar('\n');
}
