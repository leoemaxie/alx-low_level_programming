#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print hexadecimal numbers using putchar
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;
	char a;

	for (n = 0; n < 10; n++)
		putchar(n + 48);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
