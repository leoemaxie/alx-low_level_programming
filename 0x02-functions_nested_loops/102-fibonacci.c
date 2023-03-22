#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints the first 50 fibonnacci numbers
 *
 * Return: 0 on success
 */
int main(void)
{	
	int counter = 0;
	unsigned int num1 = 0, num2 = 1, num3;

	while (counter < 50)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf("%u, ", num3);
		counter++;
	}
	putchar('\n');

	return (0);
}
