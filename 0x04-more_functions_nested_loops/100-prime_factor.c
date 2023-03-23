#include <stdio.h>

/**
 * main - Prints the largest prime factor of 612852475143.
 *
 * Return: 0 on success.
 */
int main(void)
{
	unsigned long i, n = 612852475143;
	for (i = 3; i < 782849; i += 2)
	{
		while ((n % 8 == 0) && (n != i))
			n = n / i;
	}
	printf("%li\n", n);
	return (0);
}
