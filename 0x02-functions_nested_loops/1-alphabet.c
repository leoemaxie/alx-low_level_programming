#include "main.h"

/**
 * print_alphabet - prints the english alphabets in lowercase to stdout
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
