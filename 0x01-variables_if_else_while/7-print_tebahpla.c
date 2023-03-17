#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print the alphabets in lowercasein reverse order
 *
 * Return: 0 on success
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
