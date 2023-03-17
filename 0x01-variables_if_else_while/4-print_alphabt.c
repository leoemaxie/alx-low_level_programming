#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print the alphabets in lowercase without 'e' and 'q'
 *
 * Return: 0 on success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');

	return (0);
}
