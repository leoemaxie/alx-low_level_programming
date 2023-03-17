#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Program to check whether n is positive or negative
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%i is ", n);
	if (n > 0)
		puts("positive");
	else if (n == 0)
		puts("zero");
	else
		puts("negative");

	return (0);
}
