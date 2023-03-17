#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Program to print the last digit of a number and whether it is
 * greater or less than 5
 *
 * Return: 0 on success
 */
int main(void)
{
	int n, rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10;
	printf("Last digit of %i is %i and is ", n, rem);

	if (rem > 5)
		puts("greater than 5");
	else if (rem == 0)
		puts("zero");
	else
		puts("less than 6 and not 0");

	return (0);
}
