#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print the digits in base 10 using putchar
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + 48);
	putchar('\n');
	return (0);
}
