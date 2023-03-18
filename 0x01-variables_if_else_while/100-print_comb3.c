#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print the different possible combinations of
 * two digits
 *
 * Return: 0 on success
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (j == i)
				continue;
			putchar(i + 48);
			putchar(j + 48);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
