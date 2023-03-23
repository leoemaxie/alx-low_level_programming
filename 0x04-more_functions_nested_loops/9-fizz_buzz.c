#include <stdio.h>

/**
 * main - Prints 'Fizz' for multiples of 3, 'Buzz' for multiples of 5,
 * 'FizzBuzz' for multiples of 3 and 5 in rabge 1 to 100.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int i;

	for (i = 3; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%i ", i);
	}
	putchar('\n');

	return (0);
}
