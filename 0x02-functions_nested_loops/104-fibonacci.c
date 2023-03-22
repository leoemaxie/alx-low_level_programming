#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints the first 100 fibonnacci numbers after
 * hardcoding 1 and 2
 *
 * Return: 0 on success
 */
int main(void)
{	
	int counter = 0;
	unsigned long num1 = 1, num2 = 2, num3;

	printf("%lu, %lu, ", num1, num2);
	while (counter < 98)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf("%lu, ", num3);
		counter++;
	}
	putchar('\n');

	return (0);
}
