#include "main.h"

/**
 * puts_half - Prints half of a string.
 *
 * @str: Pointer to the string.
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int half;
	char *t;

	half = len % 2 == 0 ? len / 2 : (len - 1) / 2;
	t = str + half;

	while (*t)
	{
		_putchar(*t);
		t++;
	}
	_putchar('\n');
}
