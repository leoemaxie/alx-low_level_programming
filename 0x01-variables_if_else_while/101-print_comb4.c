#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print the possible different combinations of
 * three digits
 *
 * Return: 0 on success
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (i == j)
				continue;
			for (k = j; k < 10; k++)
			{
				if (j >= k)
					continue;

				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);

				if ((i + j + k) != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
