#include "main.h"

/**
 * _puts - Prints a string to stdout.
 *
 * @str: Pointer to the string.
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
