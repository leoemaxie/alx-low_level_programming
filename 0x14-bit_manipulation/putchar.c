#include <unistd.h>
#include "main.h"

/**
 * _putchar - Prints a character to stdout.
 *
 * @c: The character to print.
 *
 * Return: 1.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
