#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print the possible combination of a number
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; ++n)
	{
		putchar(n + 48);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
