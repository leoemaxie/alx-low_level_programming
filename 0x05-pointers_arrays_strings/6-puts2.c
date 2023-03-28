#include "main.h"

/**
 * puts2 - Prints characters in a string at different intervals to stdout.
 *
 * @str: Pointer to the string.
 *
 * Return: Nothing.
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
